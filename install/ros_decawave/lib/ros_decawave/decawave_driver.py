#!/usr/bin/env python3
# import roslib; roslib.load_manifest('ros_decawave')

import rclpy
import tf2_ros
import time

import serial
import struct

from std_msgs.msg import Header


from geometry_msgs.msg import PointStamped

import math
import sys

from geometry_msgs.msg import TransformStamped
from nav_msgs.msg import Odometry

import numpy as np

import rclpy
from rclpy.node import Node

from tf2_ros.static_transform_broadcaster import StaticTransformBroadcaster
# from tf.transformations import quaternion_from_euler


from ros_decawave.msg import Tag, Anchor, AnchorArray, Acc

#SPRAWDZIĆ WSZYSTKIE "TO CHECK"

class DecawaveDriver(Node):
    """ docstring for DecawaveDriver """

    def __init__(self):
        super().__init__('decawave_driver')
        # rclpy.init('decawave_driver')
        # Getting Serial Parameters
        self.port_='/dev/ttyACM0'
        # self.port_='/dev/ttyACM0'
        self.baudrate_='115200'
        self.tf_publisher_ = "True"
        self.tf_reference_= 'world'
        self.tag_name_='tag'
        self.rate_= 10
        self.timer_period = 0.5 # seconds
        # self.declare_parameter(0.5)
        # Initiate Serial
        self.ser = serial.Serial(self.port_, self.baudrate_, timeout=0.1)
        self.ser.timeout=0.1
        self.get_logger().info('\33[96mConnected to "%s"\33[0m' % self.ser.portstr)
        self.get_logger().info('\33[96mBaudrate is "%s"\33[0m' % self.baudrate_)
        self.get_uart_mode()
        self.switch_uart_mode()
        self.get_tag_status()
        self.get_tag_version()
        self.anchors = AnchorArray()
        self.anchors.anchors = []
        self.tag = Tag()
        self.odometry = Odometry()

        self.run()

    def get_uart_mode(self):
        """ Check UART Mode Used """
        # self.get_logger().info(
        #     "\33[96mChecking which UART mode is the gateway...\33[0m")
        self.get_logger().info('\33[96mChecking which UART mode is the gateway...\33[0m"')
        self.mode_ = 'UNKNOWN'
        self.ser.write(b'\r')  # Test Mode
        time.sleep(0.1)
        while(self.ser.inWaiting() == 0):
            pass
        cc = self.ser.readline()
        if cc == '\r\n' and self.ser.readline() == 'dwm> ':  # SHELL MODE
            self.get_logger().info(
                "\33[96mDevice is on SHELL MODE! It must to be changed to GENERIC MODE!\33[0m")
            self.mode_ = "SHELL"
        elif cc == '@\x01\x01':  # GENERIC MODE
            self.get_logger().info("\33[96mDevice is on GENERIC MODE! Ok!\33[0m")
            self.mode_ = "GENERIC"
        return self.mode_

    def switch_uart_mode(self):
        if self.mode_ == "SHELL":
            self.get_logger().info("\33[96mChanging UART mode to GENERIC MODE...\33[0m")
            self.ser.write(b'quit\r')  # Go to Generic Mode
            while(self.ser.inWaiting() == 0):
                pass
            self.ser.readline()
            self.get_logger().info("\33[96m%s\33[0m",
                          self.ser.readline().replace('\n', ''))
        elif self.mode_ == "UNKNOWN":
            self.get_logger().error(
                "\33[96mUnknown Mode Detected! Please reset the device and try again!\33[0m" )

    def get_tag_version(self):
        self.ser.flushInput()
        self.ser.write(b'\x15\x00')  # Status
        # now = self.get_clock().now().to_msg()
        now = self.get_clock().now().to_msg() 
        while(self.ser.inWaiting() < 21):
            if (self.get_clock().now().to_msg().sec - now.sec) > self.ser.timeout: #TO CHECK
                self.get_logger().warn("Malformed packet! Ignoring tag version.")
                self.ser.flushInput()
                return None
        version = self.ser.read(21)
        data_ = struct.unpack('<BBBBBLBBLBBL', bytearray(version))
        self.get_logger().info("\33[96m--------------------------------\33[0m")
        self.get_logger().info("\33[96mFirmware Version:0x" +
                      format(data_[5], '04X')+"\33[0m")
        self.get_logger().info("\33[96mConfiguration Version:0x" +
                      format(data_[8], '04X')+"\33[0m")
        self.get_logger().info("\33[96mHardware Version:0x" +
                      format(data_[11], '04X')+"\33[0m")
        self.get_logger().info("\33[96m--------------------------------\33[0m")

    def get_tag_acc(self):
        # Acc is not implemented on Generic Mode
        self.ser.flushInput()
        self.ser.write(b'\x19\x33\x04')  # Status
        while(self.ser.inWaiting() == 0):
            pass
        data_ = self.ser.readline()
        print("%s", data_)

    def get_tag_status(self):
        self.ser.flushInput()
        self.ser.write(b'\x32\x00')  # Status
        while(self.ser.inWaiting() == 0):
            pass
        status = self.ser.readline()
        data_ = struct.unpack('<BBBBBB', bytearray(status))
        if data_[0] != 64 and data_[2] != 0:
            self.get_logger().warn("Get Status Failed! Packet does not match!")
            print("%s", data_)
        if data_[5] == 3:
            self.get_logger().info(
                "\33[96mTag is CONNECTED to a UWB network and LOCATION data are READY!\33[0m")
        elif data_[5] == 2:
            self.get_logger().warn(
                "Tag is CONNECTED to a UWB network but LOCATION data are NOT READY!")
        elif data_[5] == 1:
            self.get_logger().warn(
                "Tag is NOT CONNECTED to a UWB network but LOCATION data are READY!")
        elif data_[5] == 0:
            self.get_logger().warn(
                "Tag is NOT CONNECTED to a UWB network and LOCATION data are NOT READY!")

    def get_tag_location(self):
        self.ser.flushInput()
        self.ser.write(b'\x0c\x00')
        now = self.get_clock().now().to_msg()
        while (self.ser.inWaiting() < 21):
            if float(self.get_clock().now().to_msg().sec - now.sec) > self.ser.timeout:
                self.get_logger().warn("Malformed packet! Ignoring tag location.")
                self.ser.flushInput()
                return None
        data_ = self.ser.read(21)
        data_ = struct.unpack('<BBBBBlllBBBB', bytearray(data_))
        self.tag.x = float(data_[5])/1000.0
        self.tag.y = float(data_[6])/1000.0
        self.tag.z = float(data_[7])/1000.0
        self.tag.qf = float(data_[8])/100.0
        self.tag.n_anchors = int(data_[11])
        self.tag.header.frame_id = self.tag_name_

        self.anchor_packet_size = 20  # Size of anchor packet in bytes
        now = self.get_clock().now().to_msg()
        while (self.ser.inWaiting() < self.anchor_packet_size * self.tag.n_anchors):
            if (self.get_clock().now().to_msg() - now) > self.serial_timeout:
                self.get_logger().warn("Malformed packet! Ignoring anchors location.")
                self.ser.flushInput()
                return None
        self.anchors.anchors = []  # Clean Anchors list
        for i in range(self.tag.n_anchors):

            data_ = self.ser.read(self.anchor_packet_size)
            data_ = struct.unpack('<HlBlllB', bytearray(data_))
            a = Anchor()
            a.header.frame_id = str(format(data_[0], '04X'))
            a.header.stamp = self.get_clock().now().to_msg()
            a.distance = float(data_[1])/1000.0
            a.dist_qf = float(data_[2])/100.0
            a.x = float(data_[3])/1000.0
            a.y = float(data_[4])/1000.0
            a.z = float(data_[5])/1000.0
            a.qf = float(data_[6])/100.0
            self.anchors.anchors.append(a)

    def tf_callback(self):
        if self.tf_publisher_ == "True":
            self.br.sendTransform((self.tag.x, self.tag.y, self.tag.z),
                                  self.quaternion_from_euler(
                                      0, 0, 0),
                                  self.get_clock().now().to_msg(),
                                  self.tag_name_,
                                  self.tf_reference_)
            for anchor in self.anchors.anchors:
                self.br.sendTransform((anchor.x, anchor.y, anchor.z),
                                      self.quaternion_from_euler(
                                          0, 0, 0),
                                      self.get_clock().now().to_msg(),
                                      anchor.header.frame_id,
                                      self.tf_reference_)

    def get_odometry(self):
        self.odometry.pose.pose.position.x = self.tag.x
        self.odometry.pose.pose.position.y = self.tag.y
        self.odometry.pose.pose.position.z = self.tag.z
        self.odometry.header.frame_id = self.tag.header.frame_id

    def euler_from_quaternion(self,x,y,z):
        """
        Converts quaternion (w in last place) to euler roll, pitch, yaw
        quaternion = [x, y, z, w]
        Bellow should be replaced when porting for ROS 2 Python tf_conversions is done.
        """
        # x = quaternion.x
        # y = quaternion.y
        # z = quaternion.z
        w = 1

        sinr_cosp = 2 * (w * x + y * z)
        cosr_cosp = 1 - 2 * (x * x + y * y)
        roll = np.arctan2(sinr_cosp, cosr_cosp)

        sinp = 2 * (w * y - z * x)
        pitch = np.arcsin(sinp)

        siny_cosp = 2 * (w * z + x * y)
        cosy_cosp = 1 - 2 * (y * y + z * z)
        yaw = np.arctan2(siny_cosp, cosy_cosp)

        return roll, pitch, yaw

    def quaternion_from_euler(self,roll, pitch, yaw):
        """
        Converts quaternion (w in last place) to euler roll, pitch, yaw
        quaternion = [w, x, y, z]
        Bellow should be replaced when porting for ROS 2 Python tf_conversions is done.
        """
        cy = math.cos(yaw * 0.5)
        sy = math.sin(yaw * 0.5)
        cp = math.cos(pitch * 0.5)
        sp = math.sin(pitch * 0.5)
        cr = math.cos(roll * 0.5)
        sr = math.sin(roll * 0.5)
    
        q = [0] * 4
        q[0] = cy * cp * cr + sy * sp * sr
        q[1] = cy * cp * sr - sy * sp * cr
        q[2] = sy * cp * sr + cy * sp * cr
        q[3] = sy * cp * cr - cy * sp * sr
    
        return q

    def run(self):
        self.create_rate(self.rate_)
        # self.rate = rclpy.Rate(self.rate_)
        self.get_logger().info("\33[96mInitiating Driver...\33[0m")
        # self.tag_pub_ = rclpy.Publisher('tag_pose', Tag, queue_size=1)
        # self.anchors_pub_ = rclpy.Publisher('tag_status', AnchorArray, queue_size=1)
        self.tag_pub_ = self.create_publisher(Odometry, 'tag_pub', 10) # 1 to queue_size
        # self.anchors_pub_ = self.create_publisher(Odometry, 'anchor_pub', 1)
        self.timer = self.create_timer(self.timer_period, self.run)
        self.br = tf2_ros.TransformBroadcaster(self) #
        # while not rclpy.is_shutdown(): #TO CHECK
        self.get_tag_location()
        self.tag.header.stamp = self.get_clock().now().to_msg()
        self.get_odometry()
        self.tag_pub_.publish(self.odometry)
        # self.anchors.header.stamp = self.get_clock().now().to_msg()
        # self.anchors_pub_.publish(self.anchors) #TO_CHECK
        # self.rate.sleep() #TO_CHECK


# Main function
if __name__ == '__main__':
    try:
        rclpy.init()
        decawave_driver = DecawaveDriver()
        rclpy.spin(decawave_driver)
        decawave_driver.destroy_node()
        rclpy.shutdown()
        # dd = DecawaveDriver()
        # dd.run()
    except rclpy.ROSInterruptException:
        self.get_logger().info("[Decawave Driver]: Closed!")

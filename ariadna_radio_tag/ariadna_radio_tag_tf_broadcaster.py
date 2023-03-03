#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import TransformStamped
from tf2_ros import TransformBroadcaster

class AriadnaMapTFBroadcaster(Node):

    def __init__(self):
        super().__init__('ariadna_radio_tag_tf_broadcaster')
        self.tf_broadcaster = TransformBroadcaster(self)

        self.declare_parameter('frequency', 10.0)
        self.frequency = self.get_parameter('frequency').value
        self.timer_rf = self.create_timer(1/self.frequency, self.publish_transform)
        self.get_logger().info('Publish transform between radio_tag and map with the %s Hz.' % self.frequency)
   
    def publish_transform(self):
        transform = TransformStamped()
        transform.transform.translation.x = transform.transform.translation.x + 0.5
        transform.transform.translation.y = transform.transform.translation.y + 0.5
        transform.header.stamp = self.get_clock().now().to_msg()
        transform.header.frame_id = 'radio_tag'
        transform.child_frame_id = 'map'
        self.tf_broadcaster.sendTransform(transform)

def main(args=None):
    rclpy.init(args=args)
    node = AriadnaMapTFBroadcaster()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    rclpy.shutdown()

if __name__ == '__main__':
    main()
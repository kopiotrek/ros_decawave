from launch import LaunchDescription
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
import os

def generate_launch_description():
    ariadna_radio_tag_package_dir = get_package_share_directory("ariadna_radio_tag")
    return LaunchDescription([
        Node(
            package='ariadna_radio_tag',
            executable='decawave_driver.py',
            name='decawave_driver',
            output='screen',
            #parameters=[os.path.join(ariadna_radio_tag_package_dir, 'params', '')],
        ),
        Node(
            package='ariadna_radio_tag',
            executable='ariadna_map_tf_broadcaster.py',
            name='ariadna_map_tf_broadcaster',
            output='screen',
            #parameters=[os.path.join(ariadna_radio_tag_package_dir, 'params', '')],
        ),
        Node(
            package='ariadna_radio_tag',
            executable='ariadna_radio_tag_tf_broadcaster.py',
            name='ariadna_radio_tag_tf_broadcaster',
            output='screen',
            #parameters=[os.path.join(ariadna_radio_tag_package_dir, 'params', '')],
        ),
    ])

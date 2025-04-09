import launch
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os
import yaml
from launch.actions import IncludeLaunchDescription, ExecuteProcess,RegisterEventHandler
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.substitutions import FindPackageShare
from launch.event_handlers import OnProcessExit
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument, OpaqueFunction
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    lidar_correction_file = os.path.join(get_package_share_directory("hesai_lidar"), 'config', 'PandarXT-16.csv')

    return LaunchDescription([
        Node(
            package ='hesai_lidar',
            namespace ='/',
            executable ='hesai_lidar_node',
            name ='hesai_node',
            output ="screen",
            parameters=[
                {"pcap_file": ""},
                {"server_ip"  : "192.168.123.20"},
                {"lidar_recv_port"  : 2368},
                {"gps_port"  : 10110},
                {"start_angle"  : 0.0},
                {"lidar_type"  : "PandarXT-16"},
                {"frame_id"  : "hesai_lidar"},
                {"pcldata_type"  : 0},
                {"publish_type"  : "both"},
                {"timestamp_type"  : "realtime"},
                {"data_type"  : ""},
                {"lidar_correction_file"  : lidar_correction_file},
                {"multicast_ip"  : ""},
                {"coordinate_correction_flag"  : False},
                {"fixed_frame"  : ""},
                {"target_frame_frame"  : ""}
            ]
        )
    ])




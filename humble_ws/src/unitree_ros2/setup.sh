#!/bin/bash
echo "Setup unitree ros2 environment"
#source /opt/ros/foxy/setup.bash
source unitree_ros2/cyclonedds_ws/install/setup.bash
export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
export CYCLONEDDS_URI='<CycloneDDS><Domain><General><Interfaces>
                            <NetworkInterface name="eth0" priority="1" multicast="default" />
                       </Interfaces></General></Domain></CycloneDDS>'

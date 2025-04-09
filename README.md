
https://techshare.co.jp/faq/?p=345881&preview=true

# Make a docker image and a docker container

```sh
cd docker
docker build -t go2-humble:latest .
```


```sh
git clone https://github.com/TechShare-inc/go2_unitree_ros2.git -b imu_publisher
git clone https://github.com/TechShare-inc/HesaiLidar_General_ROS-ROS2.git
git clone https://github.com/unitreerobotics/unitree_ros2.git
git clone https://github.com/TechShare-inc/direct_lidar_inertial_odometry.git
```

```
$ cd ..
$ bash ../docker/humble.sh
# cd external/
# colcon build --symlink-install
```

# unitree_ros2

setup.sh
```sh
#!/bin/bash
echo "Setup unitree ros2 environment"
#source /opt/ros/foxy/setup.bash
source $HOME/unitree_ros2/cyclonedds_ws/install/setup.bash
export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
export CYCLONEDDS_URI='<CycloneDDS><Domain><General><Interfaces>
                            <NetworkInterface name="eth0" priority="1" multicast="default" />
                            <NetworkInterface name="wlan0" priority="2" multicast="default" />
                        </Interfaces></General></Domain></CycloneDDS>'
```

rviz
```sh
$ rviz2 -d direct_lidar_inertial_odometry/launch/dlio.rviz
```

# unitree-go2-dlio
# unitree-go2-dlio
# unitree-go2-dlio
# unitree-go2-dlio
# unitree-go2-dlio

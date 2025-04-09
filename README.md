


> Written with [StackEdit中文版](https://stackedit.cn/).

We use 
- unitree ros2 : to handle go2 with ROS2 
- imu_publisher : to publish imu information in go2. We made it. 
- Hesai LiDAR SDK : SDK to use xt16, we modified it a lot. 
- dlio : SLAM algorithm used in this project. We used the open source ROS2 branch. The topic name and other parameters were modified for this article.

```
 $ cd humble_ws/src $ git clone https://github.com/TechShare-inc/go2_unitree_ros2.git -b imu_publisher 
 $ git clone https://github.com/TechShare-inc/HesaiLidar_ROS2_techshare.git 
 $ git clone https://github.com/unitreerobotics/unitree_ros2.git 
 $ git clone https://github.com/TechShare-inc/direct_lidar_inertial_odometry.git
 ```

The scene when it was performed on an actual machine at our company:
![](https://techshare.co.jp/faq/wp-content/uploads/2024/06/faq_go2_xt16_2-2.png)  

## 2-3. create docker image

This article will be implemented in a ros2 humble environment, so a docker image will be created.
  
```
$ cd docker $ docker build -t go2-humble:latest .
```


*This will take quite a while 

Note that docker is not included by default, so you can use the following command to add docker, for example:

```
$ sudo apt-get update 
$ sudo apt-get install apt-transport-https ca-certificates curl software-properties-common 
$ curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo gpg --dearmor -o /usr/share/keyrings/docker-archive-keyring.gpg 
$ echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/docker-archive-keyring.gpg] https://download.docker.com/linux/ubuntu 
$(lsb_release -cs) stable" | sudo tee /etc/apt/sources.list.d/docker.list > /dev/null 
$ sudo apt-get update 
$ sudo apt-get install docker-ce docker-ce-cli containerd.io 
$ sudo usermod -aG docker $USER 
$ newgrp docker 
$ distribution=$(. /etc/os-release;echo $ID$VERSION_ID) \ 
	&& curl -s -L https://nvidia.github.io/nvidia-docker/gpgkey | sudo apt-key add - \ 
	&& curl -s -L https://nvidia.github.io/nvidia-docker/$distribution/nvidia-docker.list | sudo tee /etc/apt/sources.list.d/nvidia-docker.list 
$ sudo apt-get update 
$ sudo apt-get install -y nvidia-docker2 
$ sudo systemctl restart docker
```

The scene when it was performed on an actual machine at our company:
![](https://techshare.co.jp/faq/wp-content/uploads/2024/06/faq_go2_xt16_2-3.png)  

![](https://techshare.co.jp/faq/wp-content/uploads/2024/06/faq_go2_xt16_2-3_finish.png)  

## 2-4. create docker container

```
$ cd humble_ws $ bash ../docker/humble.sh
```


This will create a docker container.

If you still get the error “nvidia is unknown” here, you need to run the docker install command in section 2-3. (You do not need to do the build of the image again)

![](https://techshare.co.jp/faq/wp-content/uploads/2024/06/faq_go2_xt16_2-4.png)  


## 2-5. Compile 

Create a container in the previous section and compile as follows while inside the container.
  

```
# cd /external 
# colcon build --symlink-install
```

![](https://techshare.co.jp/faq/wp-content/uploads/2024/06/faq_go2_xt16_2-5.png)  


## 2-6. unitree_ros2 environment setup 

Setup the unitree_ros2 environment.
Modify unitree_ros2/setup.sh as shown below.

In this article, rviz is run on an external PC connected wirelessly, so the wireless interface wlan0 is also included.
In this way, topics delivered from the DockingStation will also be delivered to computers on the same network as wlan0.

  

```
#!/bin/bash
echo "Setup unitree ros2 environment"
#source /opt/ros/foxy/setup.bash
source unitree_ros2/cyclonedds_ws/install/setup.bash
export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
export CYCLONEDDS_URI='<CycloneDDS><Domain><General><Interfaces>
                            <NetworkInterface name="eth0" priority="1" multicast="default" />
                            <NetworkInterface name="wlan0" priority="2" multicast="default" />
                       </Interfaces></General></Domain></CycloneDDS>'
```

![](https://techshare.co.jp/faq/wp-content/uploads/2024/06/faq_go2_xt16_2-6.png)  

 


# 3. Execute 

---------- 

  

## 3-1. Execute D-LIO 

By doing the following.

```
# cd /external/src # catmux_create_session test_catmux.yaml
```

If it is executed correctly, you will see the following screen.
imu_publisher
![](https://techshare.co.jp/faq/wp-content/uploads/2024/06/faq_go2_xt16_3-1-1.png)

HesaiLiDARSDK
![](https://techshare.co.jp/faq/wp-content/uploads/2024/06/faq_go2_xt16_3-1-2.png)

dlio
![](https://techshare.co.jp/faq/wp-content/uploads/2024/06/faq_go2_xt16_3-1-3.png)  

 


## 3-2. Visualization 

Drawing on the Docking Station (Orin NX) uses a lot of memory, so we will use an external PC to depict it.

If you connect the external PC to the same wireless network and perform the following setup on the external PC, you can see the topics distributed on the Docking Station (Orin NX). (It may not be wlan0 depending on your environment)

  

```
#!/bin/bash
echo "Setup unitree ros2 environment"
#source /opt/ros/foxy/setup.bash
source $HOME/unitree_ros2/cyclonedds_ws/install/setup.bash
export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
export CYCLONEDDS_URI='<CycloneDDS><Domain><General><Interfaces>
                            <NetworkInterface name="wlan0" priority="default" multicast="default" />
                       </Interfaces></General></Domain></CycloneDDS>'
```

Copy the dlio.rviz in the dlio pkg to an external PC.
Then start Rviz with that configuration.
  

```
$ rviz2 -d direct_lidar_inertial_odometry/launch/dlio.rviz
```

 

Rviz screen immediately after startup
![](https://techshare.co.jp/faq/wp-content/uploads/2024/06/faq_go2_xt16_3-2-2.png)

If you let the dog walk a little, a group of points will appear as shown below if it is doing well, and if you let it walk further, the trajectory will be displayed.
![](https://techshare.co.jp/faq/wp-content/uploads/2024/06/faq_go2_xt16_3-2-1.png)


If it moves like this, it is successful.
Note that it is recommended to SLAM from a standing position, since it is easy to blow up the self-position if you get down or stand up.

↓Resulting video 
[Goal of this article (video of SLAM run of XT16)](https://techshareinc-my.sharepoint.com/:v:/g/personal/koji_ishikawa_techshare_co_jp/ERvvtKGvtdZLs8yfQxIun8oBAThPiYNkH1eEktvMg82d-g?nav=eyJyZWZlcnJhbEluZm8iOnsicmVmZXJyYWxBcHAiOiJPbmVEcml2ZUZvckJ1c2luZXNzIiwicmVmZXJyYWxBcHBQbGF0Zm9ybSI6IldlYiIsInJlZmVycmFsTW9kZSI6InZpZXciLCJyZWZlcnJhbFZpZXciOiJNeUZpbGVzTGlua0NvcHkifX0&e=X9PCMz)  
 

# conclusion

In this article we have seen how to run the Go2 SLAM sample using the Go2 built-in IMU and XT16.
We hope this article has been of some help.


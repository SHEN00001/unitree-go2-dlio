cmake_minimum_required(VERSION 3.5)
project(go2_demo)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()


include_directories(
  include
  include/common
  include/nlohmann
  include/devel)
link_directories(src)

set (
  DEPENDENCY_LIST
  unitree_go
  unitree_api
  rclcpp
  std_msgs
  rosbag2_cpp
  #apriltag_service
  sensor_msgs 
)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(unitree_go REQUIRED)
find_package(unitree_api REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosbag2_cpp REQUIRED)
#find_package(apriltag_service REQUIRED)
find_package(sensor_msgs REQUIRED)

#add_executable(low_level_ctrl src/low_level_ctrl.cpp src/common/motor_crc.cpp)
#add_executable(read_low_state src/read_low_state.cpp)
#add_executable(read_motion_state src/read_motion_state.cpp)
#add_executable(read_wireless_controller src/read_wireless_controller.cpp)
#add_executable(record_bag src/record_bag.cpp)
#add_executable(sport_mode_ctrl src/sport_mode_ctrl.cpp src/common/ros2_sport_client.cpp)
#add_executable(gait_type_devel src/devel/gait_type_devel.cpp src/common/ros2_sport_client.cpp)
#add_executable(move_rotate180 src/devel/move_rotate180.cpp src/common/ros2_sport_client.cpp)
#add_executable(main_rotation src/devel/main_rotation.cpp src/common/ros2_sport_client.cpp src/devel/sport_rotation.cpp)
#add_executable(tag_move_demo src/devel/tag_move_demo.cpp src/common/ros2_sport_client.cpp src/devel/sport_rotation.cpp)
add_executable(imu_publisher src/devel/imu_publisher.cpp)

#ament_target_dependencies(low_level_ctrl ${DEPENDENCY_LIST})
#ament_target_dependencies(read_low_state ${DEPENDENCY_LIST})
#ament_target_dependencies(read_motion_state ${DEPENDENCY_LIST})
#ament_target_dependencies(read_wireless_controller ${DEPENDENCY_LIST})
#ament_target_dependencies(record_bag ${DEPENDENCY_LIST})
#ament_target_dependencies(sport_mode_ctrl ${DEPENDENCY_LIST})
#ament_target_dependencies(gait_type_devel ${DEPENDENCY_LIST})
#ament_target_dependencies(move_rotate180 ${DEPENDENCY_LIST})
#ament_target_dependencies(main_rotation ${DEPENDENCY_LIST})
#ament_target_dependencies(tag_move_demo ${DEPENDENCY_LIST})
ament_target_dependencies(imu_publisher ${DEPENDENCY_LIST})


install(TARGETS 
        #low_level_ctrl
        #read_low_state
        #read_motion_state
        #read_wireless_controller
        #record_bag
        #sport_mode_ctrl
        #gait_type_devel
        #move_rotate180
        #main_rotation
        #tag_move_demo
        imu_publisher
        DESTINATION lib/${PROJECT_NAME})


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

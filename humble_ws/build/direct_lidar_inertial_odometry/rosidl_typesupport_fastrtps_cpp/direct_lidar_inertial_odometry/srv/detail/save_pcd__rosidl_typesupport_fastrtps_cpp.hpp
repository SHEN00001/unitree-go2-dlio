// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from direct_lidar_inertial_odometry:srv/SavePCD.idl
// generated code does not contain a copyright notice

#ifndef DIRECT_LIDAR_INERTIAL_ODOMETRY__SRV__DETAIL__SAVE_PCD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define DIRECT_LIDAR_INERTIAL_ODOMETRY__SRV__DETAIL__SAVE_PCD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "direct_lidar_inertial_odometry/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "direct_lidar_inertial_odometry/srv/detail/save_pcd__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace direct_lidar_inertial_odometry
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direct_lidar_inertial_odometry
cdr_serialize(
  const direct_lidar_inertial_odometry::srv::SavePCD_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direct_lidar_inertial_odometry
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  direct_lidar_inertial_odometry::srv::SavePCD_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direct_lidar_inertial_odometry
get_serialized_size(
  const direct_lidar_inertial_odometry::srv::SavePCD_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direct_lidar_inertial_odometry
max_serialized_size_SavePCD_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace direct_lidar_inertial_odometry

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direct_lidar_inertial_odometry
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, direct_lidar_inertial_odometry, srv, SavePCD_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "direct_lidar_inertial_odometry/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "direct_lidar_inertial_odometry/srv/detail/save_pcd__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace direct_lidar_inertial_odometry
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direct_lidar_inertial_odometry
cdr_serialize(
  const direct_lidar_inertial_odometry::srv::SavePCD_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direct_lidar_inertial_odometry
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  direct_lidar_inertial_odometry::srv::SavePCD_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direct_lidar_inertial_odometry
get_serialized_size(
  const direct_lidar_inertial_odometry::srv::SavePCD_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direct_lidar_inertial_odometry
max_serialized_size_SavePCD_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace direct_lidar_inertial_odometry

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direct_lidar_inertial_odometry
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, direct_lidar_inertial_odometry, srv, SavePCD_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "direct_lidar_inertial_odometry/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direct_lidar_inertial_odometry
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, direct_lidar_inertial_odometry, srv, SavePCD)();

#ifdef __cplusplus
}
#endif

#endif  // DIRECT_LIDAR_INERTIAL_ODOMETRY__SRV__DETAIL__SAVE_PCD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

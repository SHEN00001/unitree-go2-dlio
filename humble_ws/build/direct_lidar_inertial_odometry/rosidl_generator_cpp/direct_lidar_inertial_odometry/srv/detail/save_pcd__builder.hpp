// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from direct_lidar_inertial_odometry:srv/SavePCD.idl
// generated code does not contain a copyright notice

#ifndef DIRECT_LIDAR_INERTIAL_ODOMETRY__SRV__DETAIL__SAVE_PCD__BUILDER_HPP_
#define DIRECT_LIDAR_INERTIAL_ODOMETRY__SRV__DETAIL__SAVE_PCD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "direct_lidar_inertial_odometry/srv/detail/save_pcd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace direct_lidar_inertial_odometry
{

namespace srv
{

namespace builder
{

class Init_SavePCD_Request_save_path
{
public:
  explicit Init_SavePCD_Request_save_path(::direct_lidar_inertial_odometry::srv::SavePCD_Request & msg)
  : msg_(msg)
  {}
  ::direct_lidar_inertial_odometry::srv::SavePCD_Request save_path(::direct_lidar_inertial_odometry::srv::SavePCD_Request::_save_path_type arg)
  {
    msg_.save_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::direct_lidar_inertial_odometry::srv::SavePCD_Request msg_;
};

class Init_SavePCD_Request_leaf_size
{
public:
  Init_SavePCD_Request_leaf_size()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SavePCD_Request_save_path leaf_size(::direct_lidar_inertial_odometry::srv::SavePCD_Request::_leaf_size_type arg)
  {
    msg_.leaf_size = std::move(arg);
    return Init_SavePCD_Request_save_path(msg_);
  }

private:
  ::direct_lidar_inertial_odometry::srv::SavePCD_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::direct_lidar_inertial_odometry::srv::SavePCD_Request>()
{
  return direct_lidar_inertial_odometry::srv::builder::Init_SavePCD_Request_leaf_size();
}

}  // namespace direct_lidar_inertial_odometry


namespace direct_lidar_inertial_odometry
{

namespace srv
{

namespace builder
{

class Init_SavePCD_Response_success
{
public:
  Init_SavePCD_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::direct_lidar_inertial_odometry::srv::SavePCD_Response success(::direct_lidar_inertial_odometry::srv::SavePCD_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::direct_lidar_inertial_odometry::srv::SavePCD_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::direct_lidar_inertial_odometry::srv::SavePCD_Response>()
{
  return direct_lidar_inertial_odometry::srv::builder::Init_SavePCD_Response_success();
}

}  // namespace direct_lidar_inertial_odometry

#endif  // DIRECT_LIDAR_INERTIAL_ODOMETRY__SRV__DETAIL__SAVE_PCD__BUILDER_HPP_

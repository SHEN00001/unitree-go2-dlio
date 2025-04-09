// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hesai_lidar:msg/PandarScan.idl
// generated code does not contain a copyright notice

#ifndef HESAI_LIDAR__MSG__DETAIL__PANDAR_SCAN__BUILDER_HPP_
#define HESAI_LIDAR__MSG__DETAIL__PANDAR_SCAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hesai_lidar/msg/detail/pandar_scan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hesai_lidar
{

namespace msg
{

namespace builder
{

class Init_PandarScan_packets
{
public:
  Init_PandarScan_packets()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hesai_lidar::msg::PandarScan packets(::hesai_lidar::msg::PandarScan::_packets_type arg)
  {
    msg_.packets = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hesai_lidar::msg::PandarScan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hesai_lidar::msg::PandarScan>()
{
  return hesai_lidar::msg::builder::Init_PandarScan_packets();
}

}  // namespace hesai_lidar

#endif  // HESAI_LIDAR__MSG__DETAIL__PANDAR_SCAN__BUILDER_HPP_

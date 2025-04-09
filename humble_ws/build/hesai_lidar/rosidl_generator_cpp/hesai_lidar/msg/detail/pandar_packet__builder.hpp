// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hesai_lidar:msg/PandarPacket.idl
// generated code does not contain a copyright notice

#ifndef HESAI_LIDAR__MSG__DETAIL__PANDAR_PACKET__BUILDER_HPP_
#define HESAI_LIDAR__MSG__DETAIL__PANDAR_PACKET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hesai_lidar/msg/detail/pandar_packet__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hesai_lidar
{

namespace msg
{

namespace builder
{

class Init_PandarPacket_size
{
public:
  explicit Init_PandarPacket_size(::hesai_lidar::msg::PandarPacket & msg)
  : msg_(msg)
  {}
  ::hesai_lidar::msg::PandarPacket size(::hesai_lidar::msg::PandarPacket::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hesai_lidar::msg::PandarPacket msg_;
};

class Init_PandarPacket_data
{
public:
  explicit Init_PandarPacket_data(::hesai_lidar::msg::PandarPacket & msg)
  : msg_(msg)
  {}
  Init_PandarPacket_size data(::hesai_lidar::msg::PandarPacket::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_PandarPacket_size(msg_);
  }

private:
  ::hesai_lidar::msg::PandarPacket msg_;
};

class Init_PandarPacket_stamp
{
public:
  Init_PandarPacket_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PandarPacket_data stamp(::hesai_lidar::msg::PandarPacket::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_PandarPacket_data(msg_);
  }

private:
  ::hesai_lidar::msg::PandarPacket msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hesai_lidar::msg::PandarPacket>()
{
  return hesai_lidar::msg::builder::Init_PandarPacket_stamp();
}

}  // namespace hesai_lidar

#endif  // HESAI_LIDAR__MSG__DETAIL__PANDAR_PACKET__BUILDER_HPP_

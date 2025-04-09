// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hesai_lidar:msg/PandarScan.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hesai_lidar/msg/detail/pandar_scan__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hesai_lidar
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PandarScan_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hesai_lidar::msg::PandarScan(_init);
}

void PandarScan_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hesai_lidar::msg::PandarScan *>(message_memory);
  typed_message->~PandarScan();
}

size_t size_function__PandarScan__packets(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<hesai_lidar::msg::PandarPacket> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PandarScan__packets(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<hesai_lidar::msg::PandarPacket> *>(untyped_member);
  return &member[index];
}

void * get_function__PandarScan__packets(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<hesai_lidar::msg::PandarPacket> *>(untyped_member);
  return &member[index];
}

void fetch_function__PandarScan__packets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const hesai_lidar::msg::PandarPacket *>(
    get_const_function__PandarScan__packets(untyped_member, index));
  auto & value = *reinterpret_cast<hesai_lidar::msg::PandarPacket *>(untyped_value);
  value = item;
}

void assign_function__PandarScan__packets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<hesai_lidar::msg::PandarPacket *>(
    get_function__PandarScan__packets(untyped_member, index));
  const auto & value = *reinterpret_cast<const hesai_lidar::msg::PandarPacket *>(untyped_value);
  item = value;
}

void resize_function__PandarScan__packets(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<hesai_lidar::msg::PandarPacket> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PandarScan_message_member_array[1] = {
  {
    "packets",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<hesai_lidar::msg::PandarPacket>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hesai_lidar::msg::PandarScan, packets),  // bytes offset in struct
    nullptr,  // default value
    size_function__PandarScan__packets,  // size() function pointer
    get_const_function__PandarScan__packets,  // get_const(index) function pointer
    get_function__PandarScan__packets,  // get(index) function pointer
    fetch_function__PandarScan__packets,  // fetch(index, &value) function pointer
    assign_function__PandarScan__packets,  // assign(index, value) function pointer
    resize_function__PandarScan__packets  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PandarScan_message_members = {
  "hesai_lidar::msg",  // message namespace
  "PandarScan",  // message name
  1,  // number of fields
  sizeof(hesai_lidar::msg::PandarScan),
  PandarScan_message_member_array,  // message members
  PandarScan_init_function,  // function to initialize message memory (memory has to be allocated)
  PandarScan_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PandarScan_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PandarScan_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hesai_lidar


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hesai_lidar::msg::PandarScan>()
{
  return &::hesai_lidar::msg::rosidl_typesupport_introspection_cpp::PandarScan_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hesai_lidar, msg, PandarScan)() {
  return &::hesai_lidar::msg::rosidl_typesupport_introspection_cpp::PandarScan_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

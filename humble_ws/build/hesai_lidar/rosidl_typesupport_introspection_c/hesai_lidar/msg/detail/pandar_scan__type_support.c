// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hesai_lidar:msg/PandarScan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hesai_lidar/msg/detail/pandar_scan__rosidl_typesupport_introspection_c.h"
#include "hesai_lidar/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hesai_lidar/msg/detail/pandar_scan__functions.h"
#include "hesai_lidar/msg/detail/pandar_scan__struct.h"


// Include directives for member types
// Member `packets`
#include "hesai_lidar/msg/pandar_packet.h"
// Member `packets`
#include "hesai_lidar/msg/detail/pandar_packet__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hesai_lidar__msg__PandarScan__init(message_memory);
}

void hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_fini_function(void * message_memory)
{
  hesai_lidar__msg__PandarScan__fini(message_memory);
}

size_t hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__size_function__PandarScan__packets(
  const void * untyped_member)
{
  const hesai_lidar__msg__PandarPacket__Sequence * member =
    (const hesai_lidar__msg__PandarPacket__Sequence *)(untyped_member);
  return member->size;
}

const void * hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__get_const_function__PandarScan__packets(
  const void * untyped_member, size_t index)
{
  const hesai_lidar__msg__PandarPacket__Sequence * member =
    (const hesai_lidar__msg__PandarPacket__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__get_function__PandarScan__packets(
  void * untyped_member, size_t index)
{
  hesai_lidar__msg__PandarPacket__Sequence * member =
    (hesai_lidar__msg__PandarPacket__Sequence *)(untyped_member);
  return &member->data[index];
}

void hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__fetch_function__PandarScan__packets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hesai_lidar__msg__PandarPacket * item =
    ((const hesai_lidar__msg__PandarPacket *)
    hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__get_const_function__PandarScan__packets(untyped_member, index));
  hesai_lidar__msg__PandarPacket * value =
    (hesai_lidar__msg__PandarPacket *)(untyped_value);
  *value = *item;
}

void hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__assign_function__PandarScan__packets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hesai_lidar__msg__PandarPacket * item =
    ((hesai_lidar__msg__PandarPacket *)
    hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__get_function__PandarScan__packets(untyped_member, index));
  const hesai_lidar__msg__PandarPacket * value =
    (const hesai_lidar__msg__PandarPacket *)(untyped_value);
  *item = *value;
}

bool hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__resize_function__PandarScan__packets(
  void * untyped_member, size_t size)
{
  hesai_lidar__msg__PandarPacket__Sequence * member =
    (hesai_lidar__msg__PandarPacket__Sequence *)(untyped_member);
  hesai_lidar__msg__PandarPacket__Sequence__fini(member);
  return hesai_lidar__msg__PandarPacket__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_message_member_array[1] = {
  {
    "packets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hesai_lidar__msg__PandarScan, packets),  // bytes offset in struct
    NULL,  // default value
    hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__size_function__PandarScan__packets,  // size() function pointer
    hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__get_const_function__PandarScan__packets,  // get_const(index) function pointer
    hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__get_function__PandarScan__packets,  // get(index) function pointer
    hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__fetch_function__PandarScan__packets,  // fetch(index, &value) function pointer
    hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__assign_function__PandarScan__packets,  // assign(index, value) function pointer
    hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__resize_function__PandarScan__packets  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_message_members = {
  "hesai_lidar__msg",  // message namespace
  "PandarScan",  // message name
  1,  // number of fields
  sizeof(hesai_lidar__msg__PandarScan),
  hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_message_member_array,  // message members
  hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_init_function,  // function to initialize message memory (memory has to be allocated)
  hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_message_type_support_handle = {
  0,
  &hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hesai_lidar
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hesai_lidar, msg, PandarScan)() {
  hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hesai_lidar, msg, PandarPacket)();
  if (!hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_message_type_support_handle.typesupport_identifier) {
    hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hesai_lidar__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

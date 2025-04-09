// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hesai_lidar:msg/PandarPacket.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hesai_lidar/msg/detail/pandar_packet__rosidl_typesupport_introspection_c.h"
#include "hesai_lidar/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hesai_lidar/msg/detail/pandar_packet__functions.h"
#include "hesai_lidar/msg/detail/pandar_packet__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hesai_lidar__msg__PandarPacket__init(message_memory);
}

void hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_fini_function(void * message_memory)
{
  hesai_lidar__msg__PandarPacket__fini(message_memory);
}

size_t hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__size_function__PandarPacket__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__get_const_function__PandarPacket__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__get_function__PandarPacket__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__fetch_function__PandarPacket__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__get_const_function__PandarPacket__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__assign_function__PandarPacket__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__get_function__PandarPacket__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__resize_function__PandarPacket__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_message_member_array[3] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hesai_lidar__msg__PandarPacket, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hesai_lidar__msg__PandarPacket, data),  // bytes offset in struct
    NULL,  // default value
    hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__size_function__PandarPacket__data,  // size() function pointer
    hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__get_const_function__PandarPacket__data,  // get_const(index) function pointer
    hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__get_function__PandarPacket__data,  // get(index) function pointer
    hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__fetch_function__PandarPacket__data,  // fetch(index, &value) function pointer
    hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__assign_function__PandarPacket__data,  // assign(index, value) function pointer
    hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__resize_function__PandarPacket__data  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hesai_lidar__msg__PandarPacket, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_message_members = {
  "hesai_lidar__msg",  // message namespace
  "PandarPacket",  // message name
  3,  // number of fields
  sizeof(hesai_lidar__msg__PandarPacket),
  hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_message_member_array,  // message members
  hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_init_function,  // function to initialize message memory (memory has to be allocated)
  hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_message_type_support_handle = {
  0,
  &hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hesai_lidar
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hesai_lidar, msg, PandarPacket)() {
  hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_message_type_support_handle.typesupport_identifier) {
    hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hesai_lidar__msg__PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from unitree_hg:msg/MotorState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "unitree_hg/msg/detail/motor_state__rosidl_typesupport_introspection_c.h"
#include "unitree_hg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "unitree_hg/msg/detail/motor_state__functions.h"
#include "unitree_hg/msg/detail/motor_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  unitree_hg__msg__MotorState__init(message_memory);
}

void unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_fini_function(void * message_memory)
{
  unitree_hg__msg__MotorState__fini(message_memory);
}

size_t unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__size_function__MotorState__temperature(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__temperature(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__temperature(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__fetch_function__MotorState__temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__temperature(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__assign_function__MotorState__temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__temperature(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

size_t unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__size_function__MotorState__sensor(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__sensor(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__sensor(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__fetch_function__MotorState__sensor(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__sensor(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__assign_function__MotorState__sensor(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__sensor(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__size_function__MotorState__reserve(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__reserve(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__reserve(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__fetch_function__MotorState__reserve(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__reserve(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__assign_function__MotorState__reserve(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__reserve(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_member_array[10] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__MotorState, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "q",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__MotorState, q),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__MotorState, dq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ddq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__MotorState, ddq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tau_est",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__MotorState, tau_est),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__MotorState, temperature),  // bytes offset in struct
    NULL,  // default value
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__size_function__MotorState__temperature,  // size() function pointer
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__temperature,  // get_const(index) function pointer
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__temperature,  // get(index) function pointer
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__fetch_function__MotorState__temperature,  // fetch(index, &value) function pointer
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__assign_function__MotorState__temperature,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vol",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__MotorState, vol),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__MotorState, sensor),  // bytes offset in struct
    NULL,  // default value
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__size_function__MotorState__sensor,  // size() function pointer
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__sensor,  // get_const(index) function pointer
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__sensor,  // get(index) function pointer
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__fetch_function__MotorState__sensor,  // fetch(index, &value) function pointer
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__assign_function__MotorState__sensor,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motorstate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__MotorState, motorstate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserve",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__MotorState, reserve),  // bytes offset in struct
    NULL,  // default value
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__size_function__MotorState__reserve,  // size() function pointer
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__reserve,  // get_const(index) function pointer
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__reserve,  // get(index) function pointer
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__fetch_function__MotorState__reserve,  // fetch(index, &value) function pointer
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__assign_function__MotorState__reserve,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_members = {
  "unitree_hg__msg",  // message namespace
  "MotorState",  // message name
  10,  // number of fields
  sizeof(unitree_hg__msg__MotorState),
  unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_member_array,  // message members
  unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_init_function,  // function to initialize message memory (memory has to be allocated)
  unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_type_support_handle = {
  0,
  &unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unitree_hg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_hg, msg, MotorState)() {
  if (!unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_type_support_handle.typesupport_identifier) {
    unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &unitree_hg__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

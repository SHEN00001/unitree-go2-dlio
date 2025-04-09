// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from unitree_hg:msg/BmsState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "unitree_hg/msg/detail/bms_state__rosidl_typesupport_introspection_c.h"
#include "unitree_hg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "unitree_hg/msg/detail/bms_state__functions.h"
#include "unitree_hg/msg/detail/bms_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__BmsState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  unitree_hg__msg__BmsState__init(message_memory);
}

void unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__BmsState_fini_function(void * message_memory)
{
  unitree_hg__msg__BmsState__fini(message_memory);
}

size_t unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__size_function__BmsState__cell_vol(
  const void * untyped_member)
{
  (void)untyped_member;
  return 40;
}

const void * unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_const_function__BmsState__cell_vol(
  const void * untyped_member, size_t index)
{
  const uint16_t * member =
    (const uint16_t *)(untyped_member);
  return &member[index];
}

void * unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_function__BmsState__cell_vol(
  void * untyped_member, size_t index)
{
  uint16_t * member =
    (uint16_t *)(untyped_member);
  return &member[index];
}

void unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__fetch_function__BmsState__cell_vol(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_const_function__BmsState__cell_vol(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__assign_function__BmsState__cell_vol(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_function__BmsState__cell_vol(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

size_t unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__size_function__BmsState__bmsvoltage(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_const_function__BmsState__bmsvoltage(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_function__BmsState__bmsvoltage(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__fetch_function__BmsState__bmsvoltage(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_const_function__BmsState__bmsvoltage(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__assign_function__BmsState__bmsvoltage(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_function__BmsState__bmsvoltage(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__size_function__BmsState__temperature(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_const_function__BmsState__temperature(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_function__BmsState__temperature(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__fetch_function__BmsState__temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_const_function__BmsState__temperature(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__assign_function__BmsState__temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_function__BmsState__temperature(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

size_t unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__size_function__BmsState__bmsstate(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_const_function__BmsState__bmsstate(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_function__BmsState__bmsstate(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__fetch_function__BmsState__bmsstate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_const_function__BmsState__bmsstate(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__assign_function__BmsState__bmsstate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_function__BmsState__bmsstate(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__size_function__BmsState__reserve(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_const_function__BmsState__reserve(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_function__BmsState__reserve(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__fetch_function__BmsState__reserve(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_const_function__BmsState__reserve(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__assign_function__BmsState__reserve(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_function__BmsState__reserve(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__BmsState_message_member_array[13] = {
  {
    "version_high",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__BmsState, version_high),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_low",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__BmsState, version_low),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__BmsState, fn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cell_vol",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    40,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__BmsState, cell_vol),  // bytes offset in struct
    NULL,  // default value
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__size_function__BmsState__cell_vol,  // size() function pointer
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_const_function__BmsState__cell_vol,  // get_const(index) function pointer
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_function__BmsState__cell_vol,  // get(index) function pointer
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__fetch_function__BmsState__cell_vol,  // fetch(index, &value) function pointer
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__assign_function__BmsState__cell_vol,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bmsvoltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__BmsState, bmsvoltage),  // bytes offset in struct
    NULL,  // default value
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__size_function__BmsState__bmsvoltage,  // size() function pointer
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_const_function__BmsState__bmsvoltage,  // get_const(index) function pointer
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_function__BmsState__bmsvoltage,  // get(index) function pointer
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__fetch_function__BmsState__bmsvoltage,  // fetch(index, &value) function pointer
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__assign_function__BmsState__bmsvoltage,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__BmsState, current),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "soc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__BmsState, soc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "soh",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__BmsState, soh),  // bytes offset in struct
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
    12,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__BmsState, temperature),  // bytes offset in struct
    NULL,  // default value
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__size_function__BmsState__temperature,  // size() function pointer
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_const_function__BmsState__temperature,  // get_const(index) function pointer
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_function__BmsState__temperature,  // get(index) function pointer
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__fetch_function__BmsState__temperature,  // fetch(index, &value) function pointer
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__assign_function__BmsState__temperature,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cycle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__BmsState, cycle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "manufacturer_date",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__BmsState, manufacturer_date),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bmsstate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__BmsState, bmsstate),  // bytes offset in struct
    NULL,  // default value
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__size_function__BmsState__bmsstate,  // size() function pointer
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_const_function__BmsState__bmsstate,  // get_const(index) function pointer
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_function__BmsState__bmsstate,  // get(index) function pointer
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__fetch_function__BmsState__bmsstate,  // fetch(index, &value) function pointer
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__assign_function__BmsState__bmsstate,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserve",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__BmsState, reserve),  // bytes offset in struct
    NULL,  // default value
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__size_function__BmsState__reserve,  // size() function pointer
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_const_function__BmsState__reserve,  // get_const(index) function pointer
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__get_function__BmsState__reserve,  // get(index) function pointer
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__fetch_function__BmsState__reserve,  // fetch(index, &value) function pointer
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__assign_function__BmsState__reserve,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__BmsState_message_members = {
  "unitree_hg__msg",  // message namespace
  "BmsState",  // message name
  13,  // number of fields
  sizeof(unitree_hg__msg__BmsState),
  unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__BmsState_message_member_array,  // message members
  unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__BmsState_init_function,  // function to initialize message memory (memory has to be allocated)
  unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__BmsState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__BmsState_message_type_support_handle = {
  0,
  &unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__BmsState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unitree_hg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_hg, msg, BmsState)() {
  if (!unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__BmsState_message_type_support_handle.typesupport_identifier) {
    unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__BmsState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &unitree_hg__msg__BmsState__rosidl_typesupport_introspection_c__BmsState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

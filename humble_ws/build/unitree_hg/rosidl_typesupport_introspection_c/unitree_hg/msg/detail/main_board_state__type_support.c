// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from unitree_hg:msg/MainBoardState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "unitree_hg/msg/detail/main_board_state__rosidl_typesupport_introspection_c.h"
#include "unitree_hg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "unitree_hg/msg/detail/main_board_state__functions.h"
#include "unitree_hg/msg/detail/main_board_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__MainBoardState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  unitree_hg__msg__MainBoardState__init(message_memory);
}

void unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__MainBoardState_fini_function(void * message_memory)
{
  unitree_hg__msg__MainBoardState__fini(message_memory);
}

size_t unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__size_function__MainBoardState__fan_state(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_const_function__MainBoardState__fan_state(
  const void * untyped_member, size_t index)
{
  const uint16_t * member =
    (const uint16_t *)(untyped_member);
  return &member[index];
}

void * unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_function__MainBoardState__fan_state(
  void * untyped_member, size_t index)
{
  uint16_t * member =
    (uint16_t *)(untyped_member);
  return &member[index];
}

void unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__fetch_function__MainBoardState__fan_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_const_function__MainBoardState__fan_state(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__assign_function__MainBoardState__fan_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_function__MainBoardState__fan_state(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

size_t unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__size_function__MainBoardState__temperature(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_const_function__MainBoardState__temperature(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_function__MainBoardState__temperature(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__fetch_function__MainBoardState__temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_const_function__MainBoardState__temperature(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__assign_function__MainBoardState__temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_function__MainBoardState__temperature(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

size_t unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__size_function__MainBoardState__value(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_const_function__MainBoardState__value(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_function__MainBoardState__value(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__fetch_function__MainBoardState__value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_const_function__MainBoardState__value(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__assign_function__MainBoardState__value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_function__MainBoardState__value(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__size_function__MainBoardState__state(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_const_function__MainBoardState__state(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_function__MainBoardState__state(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__fetch_function__MainBoardState__state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_const_function__MainBoardState__state(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__assign_function__MainBoardState__state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_function__MainBoardState__state(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__MainBoardState_message_member_array[4] = {
  {
    "fan_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__MainBoardState, fan_state),  // bytes offset in struct
    NULL,  // default value
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__size_function__MainBoardState__fan_state,  // size() function pointer
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_const_function__MainBoardState__fan_state,  // get_const(index) function pointer
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_function__MainBoardState__fan_state,  // get(index) function pointer
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__fetch_function__MainBoardState__fan_state,  // fetch(index, &value) function pointer
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__assign_function__MainBoardState__fan_state,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__MainBoardState, temperature),  // bytes offset in struct
    NULL,  // default value
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__size_function__MainBoardState__temperature,  // size() function pointer
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_const_function__MainBoardState__temperature,  // get_const(index) function pointer
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_function__MainBoardState__temperature,  // get(index) function pointer
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__fetch_function__MainBoardState__temperature,  // fetch(index, &value) function pointer
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__assign_function__MainBoardState__temperature,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__MainBoardState, value),  // bytes offset in struct
    NULL,  // default value
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__size_function__MainBoardState__value,  // size() function pointer
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_const_function__MainBoardState__value,  // get_const(index) function pointer
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_function__MainBoardState__value,  // get(index) function pointer
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__fetch_function__MainBoardState__value,  // fetch(index, &value) function pointer
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__assign_function__MainBoardState__value,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__MainBoardState, state),  // bytes offset in struct
    NULL,  // default value
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__size_function__MainBoardState__state,  // size() function pointer
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_const_function__MainBoardState__state,  // get_const(index) function pointer
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__get_function__MainBoardState__state,  // get(index) function pointer
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__fetch_function__MainBoardState__state,  // fetch(index, &value) function pointer
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__assign_function__MainBoardState__state,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__MainBoardState_message_members = {
  "unitree_hg__msg",  // message namespace
  "MainBoardState",  // message name
  4,  // number of fields
  sizeof(unitree_hg__msg__MainBoardState),
  unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__MainBoardState_message_member_array,  // message members
  unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__MainBoardState_init_function,  // function to initialize message memory (memory has to be allocated)
  unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__MainBoardState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__MainBoardState_message_type_support_handle = {
  0,
  &unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__MainBoardState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unitree_hg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_hg, msg, MainBoardState)() {
  if (!unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__MainBoardState_message_type_support_handle.typesupport_identifier) {
    unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__MainBoardState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &unitree_hg__msg__MainBoardState__rosidl_typesupport_introspection_c__MainBoardState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from unitree_hg:msg/LowState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "unitree_hg/msg/detail/low_state__rosidl_typesupport_introspection_c.h"
#include "unitree_hg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "unitree_hg/msg/detail/low_state__functions.h"
#include "unitree_hg/msg/detail/low_state__struct.h"


// Include directives for member types
// Member `imu_state`
#include "unitree_hg/msg/imu_state.h"
// Member `imu_state`
#include "unitree_hg/msg/detail/imu_state__rosidl_typesupport_introspection_c.h"
// Member `motor_state`
#include "unitree_hg/msg/motor_state.h"
// Member `motor_state`
#include "unitree_hg/msg/detail/motor_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__LowState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  unitree_hg__msg__LowState__init(message_memory);
}

void unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__LowState_fini_function(void * message_memory)
{
  unitree_hg__msg__LowState__fini(message_memory);
}

size_t unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__size_function__LowState__version(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__version(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__version(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__fetch_function__LowState__version(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__version(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__assign_function__LowState__version(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__version(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__size_function__LowState__motor_state(
  const void * untyped_member)
{
  (void)untyped_member;
  return 35;
}

const void * unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__motor_state(
  const void * untyped_member, size_t index)
{
  const unitree_hg__msg__MotorState * member =
    (const unitree_hg__msg__MotorState *)(untyped_member);
  return &member[index];
}

void * unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__motor_state(
  void * untyped_member, size_t index)
{
  unitree_hg__msg__MotorState * member =
    (unitree_hg__msg__MotorState *)(untyped_member);
  return &member[index];
}

void unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__fetch_function__LowState__motor_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const unitree_hg__msg__MotorState * item =
    ((const unitree_hg__msg__MotorState *)
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__motor_state(untyped_member, index));
  unitree_hg__msg__MotorState * value =
    (unitree_hg__msg__MotorState *)(untyped_value);
  *value = *item;
}

void unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__assign_function__LowState__motor_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  unitree_hg__msg__MotorState * item =
    ((unitree_hg__msg__MotorState *)
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__motor_state(untyped_member, index));
  const unitree_hg__msg__MotorState * value =
    (const unitree_hg__msg__MotorState *)(untyped_value);
  *item = *value;
}

size_t unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__size_function__LowState__wireless_remote(
  const void * untyped_member)
{
  (void)untyped_member;
  return 40;
}

const void * unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__wireless_remote(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__wireless_remote(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__fetch_function__LowState__wireless_remote(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__wireless_remote(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__assign_function__LowState__wireless_remote(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__wireless_remote(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__size_function__LowState__reserve(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__reserve(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__reserve(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__fetch_function__LowState__reserve(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__reserve(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__assign_function__LowState__reserve(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__reserve(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[9] = {
  {
    "version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__LowState, version),  // bytes offset in struct
    NULL,  // default value
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__size_function__LowState__version,  // size() function pointer
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__version,  // get_const(index) function pointer
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__version,  // get(index) function pointer
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__fetch_function__LowState__version,  // fetch(index, &value) function pointer
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__assign_function__LowState__version,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode_pr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__LowState, mode_pr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode_machine",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__LowState, mode_machine),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tick",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__LowState, tick),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imu_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__LowState, imu_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    35,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__LowState, motor_state),  // bytes offset in struct
    NULL,  // default value
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__size_function__LowState__motor_state,  // size() function pointer
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__motor_state,  // get_const(index) function pointer
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__motor_state,  // get(index) function pointer
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__fetch_function__LowState__motor_state,  // fetch(index, &value) function pointer
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__assign_function__LowState__motor_state,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wireless_remote",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    40,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__LowState, wireless_remote),  // bytes offset in struct
    NULL,  // default value
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__size_function__LowState__wireless_remote,  // size() function pointer
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__wireless_remote,  // get_const(index) function pointer
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__wireless_remote,  // get(index) function pointer
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__fetch_function__LowState__wireless_remote,  // fetch(index, &value) function pointer
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__assign_function__LowState__wireless_remote,  // assign(index, value) function pointer
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
    offsetof(unitree_hg__msg__LowState, reserve),  // bytes offset in struct
    NULL,  // default value
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__size_function__LowState__reserve,  // size() function pointer
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__reserve,  // get_const(index) function pointer
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__reserve,  // get(index) function pointer
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__fetch_function__LowState__reserve,  // fetch(index, &value) function pointer
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__assign_function__LowState__reserve,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "crc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__LowState, crc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_members = {
  "unitree_hg__msg",  // message namespace
  "LowState",  // message name
  9,  // number of fields
  sizeof(unitree_hg__msg__LowState),
  unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_member_array,  // message members
  unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__LowState_init_function,  // function to initialize message memory (memory has to be allocated)
  unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__LowState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_type_support_handle = {
  0,
  &unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unitree_hg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_hg, msg, LowState)() {
  unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_hg, msg, IMUState)();
  unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_hg, msg, MotorState)();
  if (!unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_type_support_handle.typesupport_identifier) {
    unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &unitree_hg__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

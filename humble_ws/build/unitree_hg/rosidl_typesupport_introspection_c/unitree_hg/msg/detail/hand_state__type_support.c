// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from unitree_hg:msg/HandState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "unitree_hg/msg/detail/hand_state__rosidl_typesupport_introspection_c.h"
#include "unitree_hg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "unitree_hg/msg/detail/hand_state__functions.h"
#include "unitree_hg/msg/detail/hand_state__struct.h"


// Include directives for member types
// Member `motor_state`
#include "unitree_hg/msg/motor_state.h"
// Member `motor_state`
#include "unitree_hg/msg/detail/motor_state__rosidl_typesupport_introspection_c.h"
// Member `imu_state`
#include "unitree_hg/msg/imu_state.h"
// Member `imu_state`
#include "unitree_hg/msg/detail/imu_state__rosidl_typesupport_introspection_c.h"
// Member `press_sensor_state`
#include "unitree_hg/msg/press_sensor_state.h"
// Member `press_sensor_state`
#include "unitree_hg/msg/detail/press_sensor_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__HandState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  unitree_hg__msg__HandState__init(message_memory);
}

void unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__HandState_fini_function(void * message_memory)
{
  unitree_hg__msg__HandState__fini(message_memory);
}

size_t unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__size_function__HandState__motor_state(
  const void * untyped_member)
{
  const unitree_hg__msg__MotorState__Sequence * member =
    (const unitree_hg__msg__MotorState__Sequence *)(untyped_member);
  return member->size;
}

const void * unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__get_const_function__HandState__motor_state(
  const void * untyped_member, size_t index)
{
  const unitree_hg__msg__MotorState__Sequence * member =
    (const unitree_hg__msg__MotorState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__get_function__HandState__motor_state(
  void * untyped_member, size_t index)
{
  unitree_hg__msg__MotorState__Sequence * member =
    (unitree_hg__msg__MotorState__Sequence *)(untyped_member);
  return &member->data[index];
}

void unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__fetch_function__HandState__motor_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const unitree_hg__msg__MotorState * item =
    ((const unitree_hg__msg__MotorState *)
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__get_const_function__HandState__motor_state(untyped_member, index));
  unitree_hg__msg__MotorState * value =
    (unitree_hg__msg__MotorState *)(untyped_value);
  *value = *item;
}

void unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__assign_function__HandState__motor_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  unitree_hg__msg__MotorState * item =
    ((unitree_hg__msg__MotorState *)
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__get_function__HandState__motor_state(untyped_member, index));
  const unitree_hg__msg__MotorState * value =
    (const unitree_hg__msg__MotorState *)(untyped_value);
  *item = *value;
}

bool unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__resize_function__HandState__motor_state(
  void * untyped_member, size_t size)
{
  unitree_hg__msg__MotorState__Sequence * member =
    (unitree_hg__msg__MotorState__Sequence *)(untyped_member);
  unitree_hg__msg__MotorState__Sequence__fini(member);
  return unitree_hg__msg__MotorState__Sequence__init(member, size);
}

size_t unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__size_function__HandState__press_sensor_state(
  const void * untyped_member)
{
  const unitree_hg__msg__PressSensorState__Sequence * member =
    (const unitree_hg__msg__PressSensorState__Sequence *)(untyped_member);
  return member->size;
}

const void * unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__get_const_function__HandState__press_sensor_state(
  const void * untyped_member, size_t index)
{
  const unitree_hg__msg__PressSensorState__Sequence * member =
    (const unitree_hg__msg__PressSensorState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__get_function__HandState__press_sensor_state(
  void * untyped_member, size_t index)
{
  unitree_hg__msg__PressSensorState__Sequence * member =
    (unitree_hg__msg__PressSensorState__Sequence *)(untyped_member);
  return &member->data[index];
}

void unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__fetch_function__HandState__press_sensor_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const unitree_hg__msg__PressSensorState * item =
    ((const unitree_hg__msg__PressSensorState *)
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__get_const_function__HandState__press_sensor_state(untyped_member, index));
  unitree_hg__msg__PressSensorState * value =
    (unitree_hg__msg__PressSensorState *)(untyped_value);
  *value = *item;
}

void unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__assign_function__HandState__press_sensor_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  unitree_hg__msg__PressSensorState * item =
    ((unitree_hg__msg__PressSensorState *)
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__get_function__HandState__press_sensor_state(untyped_member, index));
  const unitree_hg__msg__PressSensorState * value =
    (const unitree_hg__msg__PressSensorState *)(untyped_value);
  *item = *value;
}

bool unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__resize_function__HandState__press_sensor_state(
  void * untyped_member, size_t size)
{
  unitree_hg__msg__PressSensorState__Sequence * member =
    (unitree_hg__msg__PressSensorState__Sequence *)(untyped_member);
  unitree_hg__msg__PressSensorState__Sequence__fini(member);
  return unitree_hg__msg__PressSensorState__Sequence__init(member, size);
}

size_t unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__size_function__HandState__reserve(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__get_const_function__HandState__reserve(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__get_function__HandState__reserve(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__fetch_function__HandState__reserve(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__get_const_function__HandState__reserve(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__assign_function__HandState__reserve(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__get_function__HandState__reserve(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__HandState_message_member_array[6] = {
  {
    "motor_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__HandState, motor_state),  // bytes offset in struct
    NULL,  // default value
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__size_function__HandState__motor_state,  // size() function pointer
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__get_const_function__HandState__motor_state,  // get_const(index) function pointer
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__get_function__HandState__motor_state,  // get(index) function pointer
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__fetch_function__HandState__motor_state,  // fetch(index, &value) function pointer
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__assign_function__HandState__motor_state,  // assign(index, value) function pointer
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__resize_function__HandState__motor_state  // resize(index) function pointer
  },
  {
    "imu_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__HandState, imu_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "press_sensor_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__HandState, press_sensor_state),  // bytes offset in struct
    NULL,  // default value
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__size_function__HandState__press_sensor_state,  // size() function pointer
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__get_const_function__HandState__press_sensor_state,  // get_const(index) function pointer
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__get_function__HandState__press_sensor_state,  // get(index) function pointer
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__fetch_function__HandState__press_sensor_state,  // fetch(index, &value) function pointer
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__assign_function__HandState__press_sensor_state,  // assign(index, value) function pointer
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__resize_function__HandState__press_sensor_state  // resize(index) function pointer
  },
  {
    "power_v",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__HandState, power_v),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "power_a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__HandState, power_a),  // bytes offset in struct
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
    2,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__HandState, reserve),  // bytes offset in struct
    NULL,  // default value
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__size_function__HandState__reserve,  // size() function pointer
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__get_const_function__HandState__reserve,  // get_const(index) function pointer
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__get_function__HandState__reserve,  // get(index) function pointer
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__fetch_function__HandState__reserve,  // fetch(index, &value) function pointer
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__assign_function__HandState__reserve,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__HandState_message_members = {
  "unitree_hg__msg",  // message namespace
  "HandState",  // message name
  6,  // number of fields
  sizeof(unitree_hg__msg__HandState),
  unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__HandState_message_member_array,  // message members
  unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__HandState_init_function,  // function to initialize message memory (memory has to be allocated)
  unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__HandState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__HandState_message_type_support_handle = {
  0,
  &unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__HandState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unitree_hg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_hg, msg, HandState)() {
  unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__HandState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_hg, msg, MotorState)();
  unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__HandState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_hg, msg, IMUState)();
  unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__HandState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_hg, msg, PressSensorState)();
  if (!unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__HandState_message_type_support_handle.typesupport_identifier) {
    unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__HandState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &unitree_hg__msg__HandState__rosidl_typesupport_introspection_c__HandState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

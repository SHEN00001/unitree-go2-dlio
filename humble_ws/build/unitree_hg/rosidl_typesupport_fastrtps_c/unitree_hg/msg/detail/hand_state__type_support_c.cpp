// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from unitree_hg:msg/HandState.idl
// generated code does not contain a copyright notice
#include "unitree_hg/msg/detail/hand_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "unitree_hg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "unitree_hg/msg/detail/hand_state__struct.h"
#include "unitree_hg/msg/detail/hand_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "unitree_hg/msg/detail/imu_state__functions.h"  // imu_state
#include "unitree_hg/msg/detail/motor_state__functions.h"  // motor_state
#include "unitree_hg/msg/detail/press_sensor_state__functions.h"  // press_sensor_state

// forward declare type support functions
size_t get_serialized_size_unitree_hg__msg__IMUState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_unitree_hg__msg__IMUState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_hg, msg, IMUState)();
size_t get_serialized_size_unitree_hg__msg__MotorState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_unitree_hg__msg__MotorState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_hg, msg, MotorState)();
size_t get_serialized_size_unitree_hg__msg__PressSensorState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_unitree_hg__msg__PressSensorState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_hg, msg, PressSensorState)();


using _HandState__ros_msg_type = unitree_hg__msg__HandState;

static bool _HandState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HandState__ros_msg_type * ros_message = static_cast<const _HandState__ros_msg_type *>(untyped_ros_message);
  // Field name: motor_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unitree_hg, msg, MotorState
      )()->data);
    size_t size = ros_message->motor_state.size;
    auto array_ptr = ros_message->motor_state.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: imu_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unitree_hg, msg, IMUState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->imu_state, cdr))
    {
      return false;
    }
  }

  // Field name: press_sensor_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unitree_hg, msg, PressSensorState
      )()->data);
    size_t size = ros_message->press_sensor_state.size;
    auto array_ptr = ros_message->press_sensor_state.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: power_v
  {
    cdr << ros_message->power_v;
  }

  // Field name: power_a
  {
    cdr << ros_message->power_a;
  }

  // Field name: reserve
  {
    size_t size = 2;
    auto array_ptr = ros_message->reserve;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _HandState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HandState__ros_msg_type * ros_message = static_cast<_HandState__ros_msg_type *>(untyped_ros_message);
  // Field name: motor_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unitree_hg, msg, MotorState
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->motor_state.data) {
      unitree_hg__msg__MotorState__Sequence__fini(&ros_message->motor_state);
    }
    if (!unitree_hg__msg__MotorState__Sequence__init(&ros_message->motor_state, size)) {
      fprintf(stderr, "failed to create array for field 'motor_state'");
      return false;
    }
    auto array_ptr = ros_message->motor_state.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: imu_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unitree_hg, msg, IMUState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->imu_state))
    {
      return false;
    }
  }

  // Field name: press_sensor_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unitree_hg, msg, PressSensorState
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->press_sensor_state.data) {
      unitree_hg__msg__PressSensorState__Sequence__fini(&ros_message->press_sensor_state);
    }
    if (!unitree_hg__msg__PressSensorState__Sequence__init(&ros_message->press_sensor_state, size)) {
      fprintf(stderr, "failed to create array for field 'press_sensor_state'");
      return false;
    }
    auto array_ptr = ros_message->press_sensor_state.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: power_v
  {
    cdr >> ros_message->power_v;
  }

  // Field name: power_a
  {
    cdr >> ros_message->power_a;
  }

  // Field name: reserve
  {
    size_t size = 2;
    auto array_ptr = ros_message->reserve;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
size_t get_serialized_size_unitree_hg__msg__HandState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HandState__ros_msg_type * ros_message = static_cast<const _HandState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name motor_state
  {
    size_t array_size = ros_message->motor_state.size;
    auto array_ptr = ros_message->motor_state.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_unitree_hg__msg__MotorState(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name imu_state

  current_alignment += get_serialized_size_unitree_hg__msg__IMUState(
    &(ros_message->imu_state), current_alignment);
  // field.name press_sensor_state
  {
    size_t array_size = ros_message->press_sensor_state.size;
    auto array_ptr = ros_message->press_sensor_state.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_unitree_hg__msg__PressSensorState(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name power_v
  {
    size_t item_size = sizeof(ros_message->power_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_a
  {
    size_t item_size = sizeof(ros_message->power_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserve
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->reserve;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HandState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_unitree_hg__msg__HandState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
size_t max_serialized_size_unitree_hg__msg__HandState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: motor_state
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unitree_hg__msg__MotorState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: imu_state
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unitree_hg__msg__IMUState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: press_sensor_state
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unitree_hg__msg__PressSensorState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: power_v
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: power_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: reserve
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = unitree_hg__msg__HandState;
    is_plain =
      (
      offsetof(DataType, reserve) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _HandState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_unitree_hg__msg__HandState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HandState = {
  "unitree_hg::msg",
  "HandState",
  _HandState__cdr_serialize,
  _HandState__cdr_deserialize,
  _HandState__get_serialized_size,
  _HandState__max_serialized_size
};

static rosidl_message_type_support_t _HandState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HandState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_hg, msg, HandState)() {
  return &_HandState__type_support;
}

#if defined(__cplusplus)
}
#endif

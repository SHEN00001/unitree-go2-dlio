// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from unitree_hg:msg/MainBoardState.idl
// generated code does not contain a copyright notice
#include "unitree_hg/msg/detail/main_board_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "unitree_hg/msg/detail/main_board_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace unitree_hg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unitree_hg
cdr_serialize(
  const unitree_hg::msg::MainBoardState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: fan_state
  {
    cdr << ros_message.fan_state;
  }
  // Member: temperature
  {
    cdr << ros_message.temperature;
  }
  // Member: value
  {
    cdr << ros_message.value;
  }
  // Member: state
  {
    cdr << ros_message.state;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unitree_hg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  unitree_hg::msg::MainBoardState & ros_message)
{
  // Member: fan_state
  {
    cdr >> ros_message.fan_state;
  }

  // Member: temperature
  {
    cdr >> ros_message.temperature;
  }

  // Member: value
  {
    cdr >> ros_message.value;
  }

  // Member: state
  {
    cdr >> ros_message.state;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unitree_hg
get_serialized_size(
  const unitree_hg::msg::MainBoardState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: fan_state
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.fan_state[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.temperature[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: value
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.value[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: state
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.state[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unitree_hg
max_serialized_size_MainBoardState(
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


  // Member: fan_state
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: temperature
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: value
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: state
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = unitree_hg::msg::MainBoardState;
    is_plain =
      (
      offsetof(DataType, state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MainBoardState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const unitree_hg::msg::MainBoardState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MainBoardState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<unitree_hg::msg::MainBoardState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MainBoardState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const unitree_hg::msg::MainBoardState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MainBoardState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MainBoardState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MainBoardState__callbacks = {
  "unitree_hg::msg",
  "MainBoardState",
  _MainBoardState__cdr_serialize,
  _MainBoardState__cdr_deserialize,
  _MainBoardState__get_serialized_size,
  _MainBoardState__max_serialized_size
};

static rosidl_message_type_support_t _MainBoardState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MainBoardState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace unitree_hg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_unitree_hg
const rosidl_message_type_support_t *
get_message_type_support_handle<unitree_hg::msg::MainBoardState>()
{
  return &unitree_hg::msg::typesupport_fastrtps_cpp::_MainBoardState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, unitree_hg, msg, MainBoardState)() {
  return &unitree_hg::msg::typesupport_fastrtps_cpp::_MainBoardState__handle;
}

#ifdef __cplusplus
}
#endif

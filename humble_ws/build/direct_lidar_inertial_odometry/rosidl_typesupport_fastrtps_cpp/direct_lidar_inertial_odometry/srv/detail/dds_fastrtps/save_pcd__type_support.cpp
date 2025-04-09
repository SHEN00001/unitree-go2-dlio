// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from direct_lidar_inertial_odometry:srv/SavePCD.idl
// generated code does not contain a copyright notice
#include "direct_lidar_inertial_odometry/srv/detail/save_pcd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "direct_lidar_inertial_odometry/srv/detail/save_pcd__struct.hpp"

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

namespace direct_lidar_inertial_odometry
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direct_lidar_inertial_odometry
cdr_serialize(
  const direct_lidar_inertial_odometry::srv::SavePCD_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: leaf_size
  cdr << ros_message.leaf_size;
  // Member: save_path
  cdr << ros_message.save_path;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direct_lidar_inertial_odometry
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  direct_lidar_inertial_odometry::srv::SavePCD_Request & ros_message)
{
  // Member: leaf_size
  cdr >> ros_message.leaf_size;

  // Member: save_path
  cdr >> ros_message.save_path;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direct_lidar_inertial_odometry
get_serialized_size(
  const direct_lidar_inertial_odometry::srv::SavePCD_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: leaf_size
  {
    size_t item_size = sizeof(ros_message.leaf_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: save_path
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.save_path.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direct_lidar_inertial_odometry
max_serialized_size_SavePCD_Request(
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


  // Member: leaf_size
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: save_path
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = direct_lidar_inertial_odometry::srv::SavePCD_Request;
    is_plain =
      (
      offsetof(DataType, save_path) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SavePCD_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const direct_lidar_inertial_odometry::srv::SavePCD_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SavePCD_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<direct_lidar_inertial_odometry::srv::SavePCD_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SavePCD_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const direct_lidar_inertial_odometry::srv::SavePCD_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SavePCD_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SavePCD_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SavePCD_Request__callbacks = {
  "direct_lidar_inertial_odometry::srv",
  "SavePCD_Request",
  _SavePCD_Request__cdr_serialize,
  _SavePCD_Request__cdr_deserialize,
  _SavePCD_Request__get_serialized_size,
  _SavePCD_Request__max_serialized_size
};

static rosidl_message_type_support_t _SavePCD_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SavePCD_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace direct_lidar_inertial_odometry

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_direct_lidar_inertial_odometry
const rosidl_message_type_support_t *
get_message_type_support_handle<direct_lidar_inertial_odometry::srv::SavePCD_Request>()
{
  return &direct_lidar_inertial_odometry::srv::typesupport_fastrtps_cpp::_SavePCD_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, direct_lidar_inertial_odometry, srv, SavePCD_Request)() {
  return &direct_lidar_inertial_odometry::srv::typesupport_fastrtps_cpp::_SavePCD_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace direct_lidar_inertial_odometry
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direct_lidar_inertial_odometry
cdr_serialize(
  const direct_lidar_inertial_odometry::srv::SavePCD_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direct_lidar_inertial_odometry
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  direct_lidar_inertial_odometry::srv::SavePCD_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direct_lidar_inertial_odometry
get_serialized_size(
  const direct_lidar_inertial_odometry::srv::SavePCD_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direct_lidar_inertial_odometry
max_serialized_size_SavePCD_Response(
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


  // Member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = direct_lidar_inertial_odometry::srv::SavePCD_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SavePCD_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const direct_lidar_inertial_odometry::srv::SavePCD_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SavePCD_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<direct_lidar_inertial_odometry::srv::SavePCD_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SavePCD_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const direct_lidar_inertial_odometry::srv::SavePCD_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SavePCD_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SavePCD_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SavePCD_Response__callbacks = {
  "direct_lidar_inertial_odometry::srv",
  "SavePCD_Response",
  _SavePCD_Response__cdr_serialize,
  _SavePCD_Response__cdr_deserialize,
  _SavePCD_Response__get_serialized_size,
  _SavePCD_Response__max_serialized_size
};

static rosidl_message_type_support_t _SavePCD_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SavePCD_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace direct_lidar_inertial_odometry

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_direct_lidar_inertial_odometry
const rosidl_message_type_support_t *
get_message_type_support_handle<direct_lidar_inertial_odometry::srv::SavePCD_Response>()
{
  return &direct_lidar_inertial_odometry::srv::typesupport_fastrtps_cpp::_SavePCD_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, direct_lidar_inertial_odometry, srv, SavePCD_Response)() {
  return &direct_lidar_inertial_odometry::srv::typesupport_fastrtps_cpp::_SavePCD_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace direct_lidar_inertial_odometry
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SavePCD__callbacks = {
  "direct_lidar_inertial_odometry::srv",
  "SavePCD",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, direct_lidar_inertial_odometry, srv, SavePCD_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, direct_lidar_inertial_odometry, srv, SavePCD_Response)(),
};

static rosidl_service_type_support_t _SavePCD__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SavePCD__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace direct_lidar_inertial_odometry

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_direct_lidar_inertial_odometry
const rosidl_service_type_support_t *
get_service_type_support_handle<direct_lidar_inertial_odometry::srv::SavePCD>()
{
  return &direct_lidar_inertial_odometry::srv::typesupport_fastrtps_cpp::_SavePCD__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, direct_lidar_inertial_odometry, srv, SavePCD)() {
  return &direct_lidar_inertial_odometry::srv::typesupport_fastrtps_cpp::_SavePCD__handle;
}

#ifdef __cplusplus
}
#endif

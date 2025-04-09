// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from direct_lidar_inertial_odometry:srv/SavePCD.idl
// generated code does not contain a copyright notice

#ifndef DIRECT_LIDAR_INERTIAL_ODOMETRY__SRV__DETAIL__SAVE_PCD__TRAITS_HPP_
#define DIRECT_LIDAR_INERTIAL_ODOMETRY__SRV__DETAIL__SAVE_PCD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "direct_lidar_inertial_odometry/srv/detail/save_pcd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace direct_lidar_inertial_odometry
{

namespace srv
{

inline void to_flow_style_yaml(
  const SavePCD_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: leaf_size
  {
    out << "leaf_size: ";
    rosidl_generator_traits::value_to_yaml(msg.leaf_size, out);
    out << ", ";
  }

  // member: save_path
  {
    out << "save_path: ";
    rosidl_generator_traits::value_to_yaml(msg.save_path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SavePCD_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: leaf_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leaf_size: ";
    rosidl_generator_traits::value_to_yaml(msg.leaf_size, out);
    out << "\n";
  }

  // member: save_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "save_path: ";
    rosidl_generator_traits::value_to_yaml(msg.save_path, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SavePCD_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace direct_lidar_inertial_odometry

namespace rosidl_generator_traits
{

[[deprecated("use direct_lidar_inertial_odometry::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const direct_lidar_inertial_odometry::srv::SavePCD_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  direct_lidar_inertial_odometry::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use direct_lidar_inertial_odometry::srv::to_yaml() instead")]]
inline std::string to_yaml(const direct_lidar_inertial_odometry::srv::SavePCD_Request & msg)
{
  return direct_lidar_inertial_odometry::srv::to_yaml(msg);
}

template<>
inline const char * data_type<direct_lidar_inertial_odometry::srv::SavePCD_Request>()
{
  return "direct_lidar_inertial_odometry::srv::SavePCD_Request";
}

template<>
inline const char * name<direct_lidar_inertial_odometry::srv::SavePCD_Request>()
{
  return "direct_lidar_inertial_odometry/srv/SavePCD_Request";
}

template<>
struct has_fixed_size<direct_lidar_inertial_odometry::srv::SavePCD_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<direct_lidar_inertial_odometry::srv::SavePCD_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<direct_lidar_inertial_odometry::srv::SavePCD_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace direct_lidar_inertial_odometry
{

namespace srv
{

inline void to_flow_style_yaml(
  const SavePCD_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SavePCD_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SavePCD_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace direct_lidar_inertial_odometry

namespace rosidl_generator_traits
{

[[deprecated("use direct_lidar_inertial_odometry::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const direct_lidar_inertial_odometry::srv::SavePCD_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  direct_lidar_inertial_odometry::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use direct_lidar_inertial_odometry::srv::to_yaml() instead")]]
inline std::string to_yaml(const direct_lidar_inertial_odometry::srv::SavePCD_Response & msg)
{
  return direct_lidar_inertial_odometry::srv::to_yaml(msg);
}

template<>
inline const char * data_type<direct_lidar_inertial_odometry::srv::SavePCD_Response>()
{
  return "direct_lidar_inertial_odometry::srv::SavePCD_Response";
}

template<>
inline const char * name<direct_lidar_inertial_odometry::srv::SavePCD_Response>()
{
  return "direct_lidar_inertial_odometry/srv/SavePCD_Response";
}

template<>
struct has_fixed_size<direct_lidar_inertial_odometry::srv::SavePCD_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<direct_lidar_inertial_odometry::srv::SavePCD_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<direct_lidar_inertial_odometry::srv::SavePCD_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<direct_lidar_inertial_odometry::srv::SavePCD>()
{
  return "direct_lidar_inertial_odometry::srv::SavePCD";
}

template<>
inline const char * name<direct_lidar_inertial_odometry::srv::SavePCD>()
{
  return "direct_lidar_inertial_odometry/srv/SavePCD";
}

template<>
struct has_fixed_size<direct_lidar_inertial_odometry::srv::SavePCD>
  : std::integral_constant<
    bool,
    has_fixed_size<direct_lidar_inertial_odometry::srv::SavePCD_Request>::value &&
    has_fixed_size<direct_lidar_inertial_odometry::srv::SavePCD_Response>::value
  >
{
};

template<>
struct has_bounded_size<direct_lidar_inertial_odometry::srv::SavePCD>
  : std::integral_constant<
    bool,
    has_bounded_size<direct_lidar_inertial_odometry::srv::SavePCD_Request>::value &&
    has_bounded_size<direct_lidar_inertial_odometry::srv::SavePCD_Response>::value
  >
{
};

template<>
struct is_service<direct_lidar_inertial_odometry::srv::SavePCD>
  : std::true_type
{
};

template<>
struct is_service_request<direct_lidar_inertial_odometry::srv::SavePCD_Request>
  : std::true_type
{
};

template<>
struct is_service_response<direct_lidar_inertial_odometry::srv::SavePCD_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DIRECT_LIDAR_INERTIAL_ODOMETRY__SRV__DETAIL__SAVE_PCD__TRAITS_HPP_

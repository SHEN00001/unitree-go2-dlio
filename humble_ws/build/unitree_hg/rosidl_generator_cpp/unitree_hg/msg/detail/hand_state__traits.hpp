// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_hg:msg/HandState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_HG__MSG__DETAIL__HAND_STATE__TRAITS_HPP_
#define UNITREE_HG__MSG__DETAIL__HAND_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "unitree_hg/msg/detail/hand_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'motor_state'
#include "unitree_hg/msg/detail/motor_state__traits.hpp"
// Member 'imu_state'
#include "unitree_hg/msg/detail/imu_state__traits.hpp"
// Member 'press_sensor_state'
#include "unitree_hg/msg/detail/press_sensor_state__traits.hpp"

namespace unitree_hg
{

namespace msg
{

inline void to_flow_style_yaml(
  const HandState & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_state
  {
    if (msg.motor_state.size() == 0) {
      out << "motor_state: []";
    } else {
      out << "motor_state: [";
      size_t pending_items = msg.motor_state.size();
      for (auto item : msg.motor_state) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: imu_state
  {
    out << "imu_state: ";
    to_flow_style_yaml(msg.imu_state, out);
    out << ", ";
  }

  // member: press_sensor_state
  {
    if (msg.press_sensor_state.size() == 0) {
      out << "press_sensor_state: []";
    } else {
      out << "press_sensor_state: [";
      size_t pending_items = msg.press_sensor_state.size();
      for (auto item : msg.press_sensor_state) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: power_v
  {
    out << "power_v: ";
    rosidl_generator_traits::value_to_yaml(msg.power_v, out);
    out << ", ";
  }

  // member: power_a
  {
    out << "power_a: ";
    rosidl_generator_traits::value_to_yaml(msg.power_a, out);
    out << ", ";
  }

  // member: reserve
  {
    if (msg.reserve.size() == 0) {
      out << "reserve: []";
    } else {
      out << "reserve: [";
      size_t pending_items = msg.reserve.size();
      for (auto item : msg.reserve) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HandState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_state.size() == 0) {
      out << "motor_state: []\n";
    } else {
      out << "motor_state:\n";
      for (auto item : msg.motor_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: imu_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_state:\n";
    to_block_style_yaml(msg.imu_state, out, indentation + 2);
  }

  // member: press_sensor_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.press_sensor_state.size() == 0) {
      out << "press_sensor_state: []\n";
    } else {
      out << "press_sensor_state:\n";
      for (auto item : msg.press_sensor_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: power_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_v: ";
    rosidl_generator_traits::value_to_yaml(msg.power_v, out);
    out << "\n";
  }

  // member: power_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_a: ";
    rosidl_generator_traits::value_to_yaml(msg.power_a, out);
    out << "\n";
  }

  // member: reserve
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reserve.size() == 0) {
      out << "reserve: []\n";
    } else {
      out << "reserve:\n";
      for (auto item : msg.reserve) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HandState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace unitree_hg

namespace rosidl_generator_traits
{

[[deprecated("use unitree_hg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const unitree_hg::msg::HandState & msg,
  std::ostream & out, size_t indentation = 0)
{
  unitree_hg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use unitree_hg::msg::to_yaml() instead")]]
inline std::string to_yaml(const unitree_hg::msg::HandState & msg)
{
  return unitree_hg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<unitree_hg::msg::HandState>()
{
  return "unitree_hg::msg::HandState";
}

template<>
inline const char * name<unitree_hg::msg::HandState>()
{
  return "unitree_hg/msg/HandState";
}

template<>
struct has_fixed_size<unitree_hg::msg::HandState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<unitree_hg::msg::HandState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<unitree_hg::msg::HandState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_HG__MSG__DETAIL__HAND_STATE__TRAITS_HPP_

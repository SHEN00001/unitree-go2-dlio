// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_hg:msg/LowState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_HG__MSG__DETAIL__LOW_STATE__TRAITS_HPP_
#define UNITREE_HG__MSG__DETAIL__LOW_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "unitree_hg/msg/detail/low_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'imu_state'
#include "unitree_hg/msg/detail/imu_state__traits.hpp"
// Member 'motor_state'
#include "unitree_hg/msg/detail/motor_state__traits.hpp"

namespace unitree_hg
{

namespace msg
{

inline void to_flow_style_yaml(
  const LowState & msg,
  std::ostream & out)
{
  out << "{";
  // member: version
  {
    if (msg.version.size() == 0) {
      out << "version: []";
    } else {
      out << "version: [";
      size_t pending_items = msg.version.size();
      for (auto item : msg.version) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mode_pr
  {
    out << "mode_pr: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_pr, out);
    out << ", ";
  }

  // member: mode_machine
  {
    out << "mode_machine: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_machine, out);
    out << ", ";
  }

  // member: tick
  {
    out << "tick: ";
    rosidl_generator_traits::value_to_yaml(msg.tick, out);
    out << ", ";
  }

  // member: imu_state
  {
    out << "imu_state: ";
    to_flow_style_yaml(msg.imu_state, out);
    out << ", ";
  }

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

  // member: wireless_remote
  {
    if (msg.wireless_remote.size() == 0) {
      out << "wireless_remote: []";
    } else {
      out << "wireless_remote: [";
      size_t pending_items = msg.wireless_remote.size();
      for (auto item : msg.wireless_remote) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
    out << ", ";
  }

  // member: crc
  {
    out << "crc: ";
    rosidl_generator_traits::value_to_yaml(msg.crc, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LowState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.version.size() == 0) {
      out << "version: []\n";
    } else {
      out << "version:\n";
      for (auto item : msg.version) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mode_pr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_pr: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_pr, out);
    out << "\n";
  }

  // member: mode_machine
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_machine: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_machine, out);
    out << "\n";
  }

  // member: tick
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tick: ";
    rosidl_generator_traits::value_to_yaml(msg.tick, out);
    out << "\n";
  }

  // member: imu_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_state:\n";
    to_block_style_yaml(msg.imu_state, out, indentation + 2);
  }

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

  // member: wireless_remote
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wireless_remote.size() == 0) {
      out << "wireless_remote: []\n";
    } else {
      out << "wireless_remote:\n";
      for (auto item : msg.wireless_remote) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

  // member: crc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crc: ";
    rosidl_generator_traits::value_to_yaml(msg.crc, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LowState & msg, bool use_flow_style = false)
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
  const unitree_hg::msg::LowState & msg,
  std::ostream & out, size_t indentation = 0)
{
  unitree_hg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use unitree_hg::msg::to_yaml() instead")]]
inline std::string to_yaml(const unitree_hg::msg::LowState & msg)
{
  return unitree_hg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<unitree_hg::msg::LowState>()
{
  return "unitree_hg::msg::LowState";
}

template<>
inline const char * name<unitree_hg::msg::LowState>()
{
  return "unitree_hg/msg/LowState";
}

template<>
struct has_fixed_size<unitree_hg::msg::LowState>
  : std::integral_constant<bool, has_fixed_size<unitree_hg::msg::IMUState>::value && has_fixed_size<unitree_hg::msg::MotorState>::value> {};

template<>
struct has_bounded_size<unitree_hg::msg::LowState>
  : std::integral_constant<bool, has_bounded_size<unitree_hg::msg::IMUState>::value && has_bounded_size<unitree_hg::msg::MotorState>::value> {};

template<>
struct is_message<unitree_hg::msg::LowState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_HG__MSG__DETAIL__LOW_STATE__TRAITS_HPP_

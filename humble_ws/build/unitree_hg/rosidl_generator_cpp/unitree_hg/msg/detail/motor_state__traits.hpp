// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_hg:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_HG__MSG__DETAIL__MOTOR_STATE__TRAITS_HPP_
#define UNITREE_HG__MSG__DETAIL__MOTOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "unitree_hg/msg/detail/motor_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace unitree_hg
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorState & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: q
  {
    out << "q: ";
    rosidl_generator_traits::value_to_yaml(msg.q, out);
    out << ", ";
  }

  // member: dq
  {
    out << "dq: ";
    rosidl_generator_traits::value_to_yaml(msg.dq, out);
    out << ", ";
  }

  // member: ddq
  {
    out << "ddq: ";
    rosidl_generator_traits::value_to_yaml(msg.ddq, out);
    out << ", ";
  }

  // member: tau_est
  {
    out << "tau_est: ";
    rosidl_generator_traits::value_to_yaml(msg.tau_est, out);
    out << ", ";
  }

  // member: temperature
  {
    if (msg.temperature.size() == 0) {
      out << "temperature: []";
    } else {
      out << "temperature: [";
      size_t pending_items = msg.temperature.size();
      for (auto item : msg.temperature) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vol
  {
    out << "vol: ";
    rosidl_generator_traits::value_to_yaml(msg.vol, out);
    out << ", ";
  }

  // member: sensor
  {
    if (msg.sensor.size() == 0) {
      out << "sensor: []";
    } else {
      out << "sensor: [";
      size_t pending_items = msg.sensor.size();
      for (auto item : msg.sensor) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: motorstate
  {
    out << "motorstate: ";
    rosidl_generator_traits::value_to_yaml(msg.motorstate, out);
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
  const MotorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q: ";
    rosidl_generator_traits::value_to_yaml(msg.q, out);
    out << "\n";
  }

  // member: dq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dq: ";
    rosidl_generator_traits::value_to_yaml(msg.dq, out);
    out << "\n";
  }

  // member: ddq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ddq: ";
    rosidl_generator_traits::value_to_yaml(msg.ddq, out);
    out << "\n";
  }

  // member: tau_est
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tau_est: ";
    rosidl_generator_traits::value_to_yaml(msg.tau_est, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.temperature.size() == 0) {
      out << "temperature: []\n";
    } else {
      out << "temperature:\n";
      for (auto item : msg.temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vol
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vol: ";
    rosidl_generator_traits::value_to_yaml(msg.vol, out);
    out << "\n";
  }

  // member: sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensor.size() == 0) {
      out << "sensor: []\n";
    } else {
      out << "sensor:\n";
      for (auto item : msg.sensor) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: motorstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motorstate: ";
    rosidl_generator_traits::value_to_yaml(msg.motorstate, out);
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

inline std::string to_yaml(const MotorState & msg, bool use_flow_style = false)
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
  const unitree_hg::msg::MotorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  unitree_hg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use unitree_hg::msg::to_yaml() instead")]]
inline std::string to_yaml(const unitree_hg::msg::MotorState & msg)
{
  return unitree_hg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<unitree_hg::msg::MotorState>()
{
  return "unitree_hg::msg::MotorState";
}

template<>
inline const char * name<unitree_hg::msg::MotorState>()
{
  return "unitree_hg/msg/MotorState";
}

template<>
struct has_fixed_size<unitree_hg::msg::MotorState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<unitree_hg::msg::MotorState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<unitree_hg::msg::MotorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_HG__MSG__DETAIL__MOTOR_STATE__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_hg:msg/MainBoardState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_HG__MSG__DETAIL__MAIN_BOARD_STATE__TRAITS_HPP_
#define UNITREE_HG__MSG__DETAIL__MAIN_BOARD_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "unitree_hg/msg/detail/main_board_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace unitree_hg
{

namespace msg
{

inline void to_flow_style_yaml(
  const MainBoardState & msg,
  std::ostream & out)
{
  out << "{";
  // member: fan_state
  {
    if (msg.fan_state.size() == 0) {
      out << "fan_state: []";
    } else {
      out << "fan_state: [";
      size_t pending_items = msg.fan_state.size();
      for (auto item : msg.fan_state) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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

  // member: value
  {
    if (msg.value.size() == 0) {
      out << "value: []";
    } else {
      out << "value: [";
      size_t pending_items = msg.value.size();
      for (auto item : msg.value) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: state
  {
    if (msg.state.size() == 0) {
      out << "state: []";
    } else {
      out << "state: [";
      size_t pending_items = msg.state.size();
      for (auto item : msg.state) {
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
  const MainBoardState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fan_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fan_state.size() == 0) {
      out << "fan_state: []\n";
    } else {
      out << "fan_state:\n";
      for (auto item : msg.fan_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.value.size() == 0) {
      out << "value: []\n";
    } else {
      out << "value:\n";
      for (auto item : msg.value) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.state.size() == 0) {
      out << "state: []\n";
    } else {
      out << "state:\n";
      for (auto item : msg.state) {
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

inline std::string to_yaml(const MainBoardState & msg, bool use_flow_style = false)
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
  const unitree_hg::msg::MainBoardState & msg,
  std::ostream & out, size_t indentation = 0)
{
  unitree_hg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use unitree_hg::msg::to_yaml() instead")]]
inline std::string to_yaml(const unitree_hg::msg::MainBoardState & msg)
{
  return unitree_hg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<unitree_hg::msg::MainBoardState>()
{
  return "unitree_hg::msg::MainBoardState";
}

template<>
inline const char * name<unitree_hg::msg::MainBoardState>()
{
  return "unitree_hg/msg/MainBoardState";
}

template<>
struct has_fixed_size<unitree_hg::msg::MainBoardState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<unitree_hg::msg::MainBoardState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<unitree_hg::msg::MainBoardState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_HG__MSG__DETAIL__MAIN_BOARD_STATE__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_hg:msg/BmsCmd.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_HG__MSG__DETAIL__BMS_CMD__TRAITS_HPP_
#define UNITREE_HG__MSG__DETAIL__BMS_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "unitree_hg/msg/detail/bms_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace unitree_hg
{

namespace msg
{

inline void to_flow_style_yaml(
  const BmsCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: cmd
  {
    out << "cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd, out);
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
  const BmsCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd, out);
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

inline std::string to_yaml(const BmsCmd & msg, bool use_flow_style = false)
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
  const unitree_hg::msg::BmsCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  unitree_hg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use unitree_hg::msg::to_yaml() instead")]]
inline std::string to_yaml(const unitree_hg::msg::BmsCmd & msg)
{
  return unitree_hg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<unitree_hg::msg::BmsCmd>()
{
  return "unitree_hg::msg::BmsCmd";
}

template<>
inline const char * name<unitree_hg::msg::BmsCmd>()
{
  return "unitree_hg/msg/BmsCmd";
}

template<>
struct has_fixed_size<unitree_hg::msg::BmsCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<unitree_hg::msg::BmsCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<unitree_hg::msg::BmsCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_HG__MSG__DETAIL__BMS_CMD__TRAITS_HPP_

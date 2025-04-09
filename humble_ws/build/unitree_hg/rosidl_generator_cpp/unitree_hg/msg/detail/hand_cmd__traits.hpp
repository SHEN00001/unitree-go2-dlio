// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_hg:msg/HandCmd.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_HG__MSG__DETAIL__HAND_CMD__TRAITS_HPP_
#define UNITREE_HG__MSG__DETAIL__HAND_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "unitree_hg/msg/detail/hand_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'motor_cmd'
#include "unitree_hg/msg/detail/motor_cmd__traits.hpp"

namespace unitree_hg
{

namespace msg
{

inline void to_flow_style_yaml(
  const HandCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_cmd
  {
    if (msg.motor_cmd.size() == 0) {
      out << "motor_cmd: []";
    } else {
      out << "motor_cmd: [";
      size_t pending_items = msg.motor_cmd.size();
      for (auto item : msg.motor_cmd) {
        to_flow_style_yaml(item, out);
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
  const HandCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_cmd.size() == 0) {
      out << "motor_cmd: []\n";
    } else {
      out << "motor_cmd:\n";
      for (auto item : msg.motor_cmd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HandCmd & msg, bool use_flow_style = false)
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
  const unitree_hg::msg::HandCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  unitree_hg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use unitree_hg::msg::to_yaml() instead")]]
inline std::string to_yaml(const unitree_hg::msg::HandCmd & msg)
{
  return unitree_hg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<unitree_hg::msg::HandCmd>()
{
  return "unitree_hg::msg::HandCmd";
}

template<>
inline const char * name<unitree_hg::msg::HandCmd>()
{
  return "unitree_hg/msg/HandCmd";
}

template<>
struct has_fixed_size<unitree_hg::msg::HandCmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<unitree_hg::msg::HandCmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<unitree_hg::msg::HandCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_HG__MSG__DETAIL__HAND_CMD__TRAITS_HPP_

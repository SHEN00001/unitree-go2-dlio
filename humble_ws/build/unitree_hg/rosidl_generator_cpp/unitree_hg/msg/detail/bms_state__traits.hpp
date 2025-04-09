// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_hg:msg/BmsState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_HG__MSG__DETAIL__BMS_STATE__TRAITS_HPP_
#define UNITREE_HG__MSG__DETAIL__BMS_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "unitree_hg/msg/detail/bms_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace unitree_hg
{

namespace msg
{

inline void to_flow_style_yaml(
  const BmsState & msg,
  std::ostream & out)
{
  out << "{";
  // member: version_high
  {
    out << "version_high: ";
    rosidl_generator_traits::value_to_yaml(msg.version_high, out);
    out << ", ";
  }

  // member: version_low
  {
    out << "version_low: ";
    rosidl_generator_traits::value_to_yaml(msg.version_low, out);
    out << ", ";
  }

  // member: fn
  {
    out << "fn: ";
    rosidl_generator_traits::value_to_yaml(msg.fn, out);
    out << ", ";
  }

  // member: cell_vol
  {
    if (msg.cell_vol.size() == 0) {
      out << "cell_vol: []";
    } else {
      out << "cell_vol: [";
      size_t pending_items = msg.cell_vol.size();
      for (auto item : msg.cell_vol) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bmsvoltage
  {
    if (msg.bmsvoltage.size() == 0) {
      out << "bmsvoltage: []";
    } else {
      out << "bmsvoltage: [";
      size_t pending_items = msg.bmsvoltage.size();
      for (auto item : msg.bmsvoltage) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current
  {
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << ", ";
  }

  // member: soc
  {
    out << "soc: ";
    rosidl_generator_traits::value_to_yaml(msg.soc, out);
    out << ", ";
  }

  // member: soh
  {
    out << "soh: ";
    rosidl_generator_traits::value_to_yaml(msg.soh, out);
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

  // member: cycle
  {
    out << "cycle: ";
    rosidl_generator_traits::value_to_yaml(msg.cycle, out);
    out << ", ";
  }

  // member: manufacturer_date
  {
    out << "manufacturer_date: ";
    rosidl_generator_traits::value_to_yaml(msg.manufacturer_date, out);
    out << ", ";
  }

  // member: bmsstate
  {
    if (msg.bmsstate.size() == 0) {
      out << "bmsstate: []";
    } else {
      out << "bmsstate: [";
      size_t pending_items = msg.bmsstate.size();
      for (auto item : msg.bmsstate) {
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BmsState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: version_high
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_high: ";
    rosidl_generator_traits::value_to_yaml(msg.version_high, out);
    out << "\n";
  }

  // member: version_low
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_low: ";
    rosidl_generator_traits::value_to_yaml(msg.version_low, out);
    out << "\n";
  }

  // member: fn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fn: ";
    rosidl_generator_traits::value_to_yaml(msg.fn, out);
    out << "\n";
  }

  // member: cell_vol
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cell_vol.size() == 0) {
      out << "cell_vol: []\n";
    } else {
      out << "cell_vol:\n";
      for (auto item : msg.cell_vol) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bmsvoltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bmsvoltage.size() == 0) {
      out << "bmsvoltage: []\n";
    } else {
      out << "bmsvoltage:\n";
      for (auto item : msg.bmsvoltage) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << "\n";
  }

  // member: soc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "soc: ";
    rosidl_generator_traits::value_to_yaml(msg.soc, out);
    out << "\n";
  }

  // member: soh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "soh: ";
    rosidl_generator_traits::value_to_yaml(msg.soh, out);
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

  // member: cycle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cycle: ";
    rosidl_generator_traits::value_to_yaml(msg.cycle, out);
    out << "\n";
  }

  // member: manufacturer_date
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manufacturer_date: ";
    rosidl_generator_traits::value_to_yaml(msg.manufacturer_date, out);
    out << "\n";
  }

  // member: bmsstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bmsstate.size() == 0) {
      out << "bmsstate: []\n";
    } else {
      out << "bmsstate:\n";
      for (auto item : msg.bmsstate) {
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BmsState & msg, bool use_flow_style = false)
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
  const unitree_hg::msg::BmsState & msg,
  std::ostream & out, size_t indentation = 0)
{
  unitree_hg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use unitree_hg::msg::to_yaml() instead")]]
inline std::string to_yaml(const unitree_hg::msg::BmsState & msg)
{
  return unitree_hg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<unitree_hg::msg::BmsState>()
{
  return "unitree_hg::msg::BmsState";
}

template<>
inline const char * name<unitree_hg::msg::BmsState>()
{
  return "unitree_hg/msg/BmsState";
}

template<>
struct has_fixed_size<unitree_hg::msg::BmsState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<unitree_hg::msg::BmsState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<unitree_hg::msg::BmsState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_HG__MSG__DETAIL__BMS_STATE__TRAITS_HPP_

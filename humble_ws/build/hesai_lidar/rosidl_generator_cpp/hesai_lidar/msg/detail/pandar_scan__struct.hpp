// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hesai_lidar:msg/PandarScan.idl
// generated code does not contain a copyright notice

#ifndef HESAI_LIDAR__MSG__DETAIL__PANDAR_SCAN__STRUCT_HPP_
#define HESAI_LIDAR__MSG__DETAIL__PANDAR_SCAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'packets'
#include "hesai_lidar/msg/detail/pandar_packet__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hesai_lidar__msg__PandarScan __attribute__((deprecated))
#else
# define DEPRECATED__hesai_lidar__msg__PandarScan __declspec(deprecated)
#endif

namespace hesai_lidar
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PandarScan_
{
  using Type = PandarScan_<ContainerAllocator>;

  explicit PandarScan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PandarScan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _packets_type =
    std::vector<hesai_lidar::msg::PandarPacket_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hesai_lidar::msg::PandarPacket_<ContainerAllocator>>>;
  _packets_type packets;

  // setters for named parameter idiom
  Type & set__packets(
    const std::vector<hesai_lidar::msg::PandarPacket_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hesai_lidar::msg::PandarPacket_<ContainerAllocator>>> & _arg)
  {
    this->packets = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hesai_lidar::msg::PandarScan_<ContainerAllocator> *;
  using ConstRawPtr =
    const hesai_lidar::msg::PandarScan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hesai_lidar::msg::PandarScan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hesai_lidar::msg::PandarScan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hesai_lidar::msg::PandarScan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hesai_lidar::msg::PandarScan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hesai_lidar::msg::PandarScan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hesai_lidar::msg::PandarScan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hesai_lidar::msg::PandarScan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hesai_lidar::msg::PandarScan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hesai_lidar__msg__PandarScan
    std::shared_ptr<hesai_lidar::msg::PandarScan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hesai_lidar__msg__PandarScan
    std::shared_ptr<hesai_lidar::msg::PandarScan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PandarScan_ & other) const
  {
    if (this->packets != other.packets) {
      return false;
    }
    return true;
  }
  bool operator!=(const PandarScan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PandarScan_

// alias to use template instance with default allocator
using PandarScan =
  hesai_lidar::msg::PandarScan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hesai_lidar

#endif  // HESAI_LIDAR__MSG__DETAIL__PANDAR_SCAN__STRUCT_HPP_

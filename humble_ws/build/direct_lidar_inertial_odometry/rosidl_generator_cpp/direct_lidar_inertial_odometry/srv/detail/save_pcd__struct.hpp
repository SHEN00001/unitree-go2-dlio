// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from direct_lidar_inertial_odometry:srv/SavePCD.idl
// generated code does not contain a copyright notice

#ifndef DIRECT_LIDAR_INERTIAL_ODOMETRY__SRV__DETAIL__SAVE_PCD__STRUCT_HPP_
#define DIRECT_LIDAR_INERTIAL_ODOMETRY__SRV__DETAIL__SAVE_PCD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__direct_lidar_inertial_odometry__srv__SavePCD_Request __attribute__((deprecated))
#else
# define DEPRECATED__direct_lidar_inertial_odometry__srv__SavePCD_Request __declspec(deprecated)
#endif

namespace direct_lidar_inertial_odometry
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SavePCD_Request_
{
  using Type = SavePCD_Request_<ContainerAllocator>;

  explicit SavePCD_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->leaf_size = 0.0f;
      this->save_path = "";
    }
  }

  explicit SavePCD_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : save_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->leaf_size = 0.0f;
      this->save_path = "";
    }
  }

  // field types and members
  using _leaf_size_type =
    float;
  _leaf_size_type leaf_size;
  using _save_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _save_path_type save_path;

  // setters for named parameter idiom
  Type & set__leaf_size(
    const float & _arg)
  {
    this->leaf_size = _arg;
    return *this;
  }
  Type & set__save_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->save_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    direct_lidar_inertial_odometry::srv::SavePCD_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const direct_lidar_inertial_odometry::srv::SavePCD_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<direct_lidar_inertial_odometry::srv::SavePCD_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<direct_lidar_inertial_odometry::srv::SavePCD_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      direct_lidar_inertial_odometry::srv::SavePCD_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<direct_lidar_inertial_odometry::srv::SavePCD_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      direct_lidar_inertial_odometry::srv::SavePCD_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<direct_lidar_inertial_odometry::srv::SavePCD_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<direct_lidar_inertial_odometry::srv::SavePCD_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<direct_lidar_inertial_odometry::srv::SavePCD_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__direct_lidar_inertial_odometry__srv__SavePCD_Request
    std::shared_ptr<direct_lidar_inertial_odometry::srv::SavePCD_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__direct_lidar_inertial_odometry__srv__SavePCD_Request
    std::shared_ptr<direct_lidar_inertial_odometry::srv::SavePCD_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SavePCD_Request_ & other) const
  {
    if (this->leaf_size != other.leaf_size) {
      return false;
    }
    if (this->save_path != other.save_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const SavePCD_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SavePCD_Request_

// alias to use template instance with default allocator
using SavePCD_Request =
  direct_lidar_inertial_odometry::srv::SavePCD_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace direct_lidar_inertial_odometry


#ifndef _WIN32
# define DEPRECATED__direct_lidar_inertial_odometry__srv__SavePCD_Response __attribute__((deprecated))
#else
# define DEPRECATED__direct_lidar_inertial_odometry__srv__SavePCD_Response __declspec(deprecated)
#endif

namespace direct_lidar_inertial_odometry
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SavePCD_Response_
{
  using Type = SavePCD_Response_<ContainerAllocator>;

  explicit SavePCD_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SavePCD_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    direct_lidar_inertial_odometry::srv::SavePCD_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const direct_lidar_inertial_odometry::srv::SavePCD_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<direct_lidar_inertial_odometry::srv::SavePCD_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<direct_lidar_inertial_odometry::srv::SavePCD_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      direct_lidar_inertial_odometry::srv::SavePCD_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<direct_lidar_inertial_odometry::srv::SavePCD_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      direct_lidar_inertial_odometry::srv::SavePCD_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<direct_lidar_inertial_odometry::srv::SavePCD_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<direct_lidar_inertial_odometry::srv::SavePCD_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<direct_lidar_inertial_odometry::srv::SavePCD_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__direct_lidar_inertial_odometry__srv__SavePCD_Response
    std::shared_ptr<direct_lidar_inertial_odometry::srv::SavePCD_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__direct_lidar_inertial_odometry__srv__SavePCD_Response
    std::shared_ptr<direct_lidar_inertial_odometry::srv::SavePCD_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SavePCD_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SavePCD_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SavePCD_Response_

// alias to use template instance with default allocator
using SavePCD_Response =
  direct_lidar_inertial_odometry::srv::SavePCD_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace direct_lidar_inertial_odometry

namespace direct_lidar_inertial_odometry
{

namespace srv
{

struct SavePCD
{
  using Request = direct_lidar_inertial_odometry::srv::SavePCD_Request;
  using Response = direct_lidar_inertial_odometry::srv::SavePCD_Response;
};

}  // namespace srv

}  // namespace direct_lidar_inertial_odometry

#endif  // DIRECT_LIDAR_INERTIAL_ODOMETRY__SRV__DETAIL__SAVE_PCD__STRUCT_HPP_

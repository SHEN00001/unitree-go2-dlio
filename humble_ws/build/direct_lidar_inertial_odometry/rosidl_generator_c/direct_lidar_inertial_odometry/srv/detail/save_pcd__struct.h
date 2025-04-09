// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from direct_lidar_inertial_odometry:srv/SavePCD.idl
// generated code does not contain a copyright notice

#ifndef DIRECT_LIDAR_INERTIAL_ODOMETRY__SRV__DETAIL__SAVE_PCD__STRUCT_H_
#define DIRECT_LIDAR_INERTIAL_ODOMETRY__SRV__DETAIL__SAVE_PCD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'save_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SavePCD in the package direct_lidar_inertial_odometry.
typedef struct direct_lidar_inertial_odometry__srv__SavePCD_Request
{
  float leaf_size;
  rosidl_runtime_c__String save_path;
} direct_lidar_inertial_odometry__srv__SavePCD_Request;

// Struct for a sequence of direct_lidar_inertial_odometry__srv__SavePCD_Request.
typedef struct direct_lidar_inertial_odometry__srv__SavePCD_Request__Sequence
{
  direct_lidar_inertial_odometry__srv__SavePCD_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} direct_lidar_inertial_odometry__srv__SavePCD_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SavePCD in the package direct_lidar_inertial_odometry.
typedef struct direct_lidar_inertial_odometry__srv__SavePCD_Response
{
  bool success;
} direct_lidar_inertial_odometry__srv__SavePCD_Response;

// Struct for a sequence of direct_lidar_inertial_odometry__srv__SavePCD_Response.
typedef struct direct_lidar_inertial_odometry__srv__SavePCD_Response__Sequence
{
  direct_lidar_inertial_odometry__srv__SavePCD_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} direct_lidar_inertial_odometry__srv__SavePCD_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DIRECT_LIDAR_INERTIAL_ODOMETRY__SRV__DETAIL__SAVE_PCD__STRUCT_H_

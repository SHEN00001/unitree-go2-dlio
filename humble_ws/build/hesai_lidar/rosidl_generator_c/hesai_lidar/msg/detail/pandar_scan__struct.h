// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hesai_lidar:msg/PandarScan.idl
// generated code does not contain a copyright notice

#ifndef HESAI_LIDAR__MSG__DETAIL__PANDAR_SCAN__STRUCT_H_
#define HESAI_LIDAR__MSG__DETAIL__PANDAR_SCAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'packets'
#include "hesai_lidar/msg/detail/pandar_packet__struct.h"

/// Struct defined in msg/PandarScan in the package hesai_lidar.
typedef struct hesai_lidar__msg__PandarScan
{
  hesai_lidar__msg__PandarPacket__Sequence packets;
} hesai_lidar__msg__PandarScan;

// Struct for a sequence of hesai_lidar__msg__PandarScan.
typedef struct hesai_lidar__msg__PandarScan__Sequence
{
  hesai_lidar__msg__PandarScan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hesai_lidar__msg__PandarScan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HESAI_LIDAR__MSG__DETAIL__PANDAR_SCAN__STRUCT_H_

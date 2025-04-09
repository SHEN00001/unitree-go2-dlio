// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hesai_lidar:msg/PandarPacket.idl
// generated code does not contain a copyright notice

#ifndef HESAI_LIDAR__MSG__DETAIL__PANDAR_PACKET__STRUCT_H_
#define HESAI_LIDAR__MSG__DETAIL__PANDAR_PACKET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PandarPacket in the package hesai_lidar.
/**
  * field  size(byte)
  * SOB   2
  * angle  2
  * measure 5
  * block  SOB + angle + measure * 40
  * timestamp 4
  * factory 2
  * reserve 8
  * rpm  2
  * tail  timestamp + factory + reserve + rpm
  * packet block * 6 + tail
 */
typedef struct hesai_lidar__msg__PandarPacket
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__uint8__Sequence data;
  uint32_t size;
} hesai_lidar__msg__PandarPacket;

// Struct for a sequence of hesai_lidar__msg__PandarPacket.
typedef struct hesai_lidar__msg__PandarPacket__Sequence
{
  hesai_lidar__msg__PandarPacket * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hesai_lidar__msg__PandarPacket__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HESAI_LIDAR__MSG__DETAIL__PANDAR_PACKET__STRUCT_H_

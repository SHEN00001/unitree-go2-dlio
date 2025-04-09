// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hesai_lidar:msg/PandarScan.idl
// generated code does not contain a copyright notice

#ifndef HESAI_LIDAR__MSG__DETAIL__PANDAR_SCAN__FUNCTIONS_H_
#define HESAI_LIDAR__MSG__DETAIL__PANDAR_SCAN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hesai_lidar/msg/rosidl_generator_c__visibility_control.h"

#include "hesai_lidar/msg/detail/pandar_scan__struct.h"

/// Initialize msg/PandarScan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hesai_lidar__msg__PandarScan
 * )) before or use
 * hesai_lidar__msg__PandarScan__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hesai_lidar
bool
hesai_lidar__msg__PandarScan__init(hesai_lidar__msg__PandarScan * msg);

/// Finalize msg/PandarScan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hesai_lidar
void
hesai_lidar__msg__PandarScan__fini(hesai_lidar__msg__PandarScan * msg);

/// Create msg/PandarScan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hesai_lidar__msg__PandarScan__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hesai_lidar
hesai_lidar__msg__PandarScan *
hesai_lidar__msg__PandarScan__create();

/// Destroy msg/PandarScan message.
/**
 * It calls
 * hesai_lidar__msg__PandarScan__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hesai_lidar
void
hesai_lidar__msg__PandarScan__destroy(hesai_lidar__msg__PandarScan * msg);

/// Check for msg/PandarScan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hesai_lidar
bool
hesai_lidar__msg__PandarScan__are_equal(const hesai_lidar__msg__PandarScan * lhs, const hesai_lidar__msg__PandarScan * rhs);

/// Copy a msg/PandarScan message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hesai_lidar
bool
hesai_lidar__msg__PandarScan__copy(
  const hesai_lidar__msg__PandarScan * input,
  hesai_lidar__msg__PandarScan * output);

/// Initialize array of msg/PandarScan messages.
/**
 * It allocates the memory for the number of elements and calls
 * hesai_lidar__msg__PandarScan__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hesai_lidar
bool
hesai_lidar__msg__PandarScan__Sequence__init(hesai_lidar__msg__PandarScan__Sequence * array, size_t size);

/// Finalize array of msg/PandarScan messages.
/**
 * It calls
 * hesai_lidar__msg__PandarScan__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hesai_lidar
void
hesai_lidar__msg__PandarScan__Sequence__fini(hesai_lidar__msg__PandarScan__Sequence * array);

/// Create array of msg/PandarScan messages.
/**
 * It allocates the memory for the array and calls
 * hesai_lidar__msg__PandarScan__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hesai_lidar
hesai_lidar__msg__PandarScan__Sequence *
hesai_lidar__msg__PandarScan__Sequence__create(size_t size);

/// Destroy array of msg/PandarScan messages.
/**
 * It calls
 * hesai_lidar__msg__PandarScan__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hesai_lidar
void
hesai_lidar__msg__PandarScan__Sequence__destroy(hesai_lidar__msg__PandarScan__Sequence * array);

/// Check for msg/PandarScan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hesai_lidar
bool
hesai_lidar__msg__PandarScan__Sequence__are_equal(const hesai_lidar__msg__PandarScan__Sequence * lhs, const hesai_lidar__msg__PandarScan__Sequence * rhs);

/// Copy an array of msg/PandarScan messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hesai_lidar
bool
hesai_lidar__msg__PandarScan__Sequence__copy(
  const hesai_lidar__msg__PandarScan__Sequence * input,
  hesai_lidar__msg__PandarScan__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HESAI_LIDAR__MSG__DETAIL__PANDAR_SCAN__FUNCTIONS_H_

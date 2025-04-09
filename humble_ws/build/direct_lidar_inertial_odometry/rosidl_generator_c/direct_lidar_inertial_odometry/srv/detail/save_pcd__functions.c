// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from direct_lidar_inertial_odometry:srv/SavePCD.idl
// generated code does not contain a copyright notice
#include "direct_lidar_inertial_odometry/srv/detail/save_pcd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `save_path`
#include "rosidl_runtime_c/string_functions.h"

bool
direct_lidar_inertial_odometry__srv__SavePCD_Request__init(direct_lidar_inertial_odometry__srv__SavePCD_Request * msg)
{
  if (!msg) {
    return false;
  }
  // leaf_size
  // save_path
  if (!rosidl_runtime_c__String__init(&msg->save_path)) {
    direct_lidar_inertial_odometry__srv__SavePCD_Request__fini(msg);
    return false;
  }
  return true;
}

void
direct_lidar_inertial_odometry__srv__SavePCD_Request__fini(direct_lidar_inertial_odometry__srv__SavePCD_Request * msg)
{
  if (!msg) {
    return;
  }
  // leaf_size
  // save_path
  rosidl_runtime_c__String__fini(&msg->save_path);
}

bool
direct_lidar_inertial_odometry__srv__SavePCD_Request__are_equal(const direct_lidar_inertial_odometry__srv__SavePCD_Request * lhs, const direct_lidar_inertial_odometry__srv__SavePCD_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // leaf_size
  if (lhs->leaf_size != rhs->leaf_size) {
    return false;
  }
  // save_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->save_path), &(rhs->save_path)))
  {
    return false;
  }
  return true;
}

bool
direct_lidar_inertial_odometry__srv__SavePCD_Request__copy(
  const direct_lidar_inertial_odometry__srv__SavePCD_Request * input,
  direct_lidar_inertial_odometry__srv__SavePCD_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // leaf_size
  output->leaf_size = input->leaf_size;
  // save_path
  if (!rosidl_runtime_c__String__copy(
      &(input->save_path), &(output->save_path)))
  {
    return false;
  }
  return true;
}

direct_lidar_inertial_odometry__srv__SavePCD_Request *
direct_lidar_inertial_odometry__srv__SavePCD_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  direct_lidar_inertial_odometry__srv__SavePCD_Request * msg = (direct_lidar_inertial_odometry__srv__SavePCD_Request *)allocator.allocate(sizeof(direct_lidar_inertial_odometry__srv__SavePCD_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(direct_lidar_inertial_odometry__srv__SavePCD_Request));
  bool success = direct_lidar_inertial_odometry__srv__SavePCD_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
direct_lidar_inertial_odometry__srv__SavePCD_Request__destroy(direct_lidar_inertial_odometry__srv__SavePCD_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    direct_lidar_inertial_odometry__srv__SavePCD_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
direct_lidar_inertial_odometry__srv__SavePCD_Request__Sequence__init(direct_lidar_inertial_odometry__srv__SavePCD_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  direct_lidar_inertial_odometry__srv__SavePCD_Request * data = NULL;

  if (size) {
    data = (direct_lidar_inertial_odometry__srv__SavePCD_Request *)allocator.zero_allocate(size, sizeof(direct_lidar_inertial_odometry__srv__SavePCD_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = direct_lidar_inertial_odometry__srv__SavePCD_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        direct_lidar_inertial_odometry__srv__SavePCD_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
direct_lidar_inertial_odometry__srv__SavePCD_Request__Sequence__fini(direct_lidar_inertial_odometry__srv__SavePCD_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      direct_lidar_inertial_odometry__srv__SavePCD_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

direct_lidar_inertial_odometry__srv__SavePCD_Request__Sequence *
direct_lidar_inertial_odometry__srv__SavePCD_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  direct_lidar_inertial_odometry__srv__SavePCD_Request__Sequence * array = (direct_lidar_inertial_odometry__srv__SavePCD_Request__Sequence *)allocator.allocate(sizeof(direct_lidar_inertial_odometry__srv__SavePCD_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = direct_lidar_inertial_odometry__srv__SavePCD_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
direct_lidar_inertial_odometry__srv__SavePCD_Request__Sequence__destroy(direct_lidar_inertial_odometry__srv__SavePCD_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    direct_lidar_inertial_odometry__srv__SavePCD_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
direct_lidar_inertial_odometry__srv__SavePCD_Request__Sequence__are_equal(const direct_lidar_inertial_odometry__srv__SavePCD_Request__Sequence * lhs, const direct_lidar_inertial_odometry__srv__SavePCD_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!direct_lidar_inertial_odometry__srv__SavePCD_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
direct_lidar_inertial_odometry__srv__SavePCD_Request__Sequence__copy(
  const direct_lidar_inertial_odometry__srv__SavePCD_Request__Sequence * input,
  direct_lidar_inertial_odometry__srv__SavePCD_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(direct_lidar_inertial_odometry__srv__SavePCD_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    direct_lidar_inertial_odometry__srv__SavePCD_Request * data =
      (direct_lidar_inertial_odometry__srv__SavePCD_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!direct_lidar_inertial_odometry__srv__SavePCD_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          direct_lidar_inertial_odometry__srv__SavePCD_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!direct_lidar_inertial_odometry__srv__SavePCD_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
direct_lidar_inertial_odometry__srv__SavePCD_Response__init(direct_lidar_inertial_odometry__srv__SavePCD_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
direct_lidar_inertial_odometry__srv__SavePCD_Response__fini(direct_lidar_inertial_odometry__srv__SavePCD_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
direct_lidar_inertial_odometry__srv__SavePCD_Response__are_equal(const direct_lidar_inertial_odometry__srv__SavePCD_Response * lhs, const direct_lidar_inertial_odometry__srv__SavePCD_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
direct_lidar_inertial_odometry__srv__SavePCD_Response__copy(
  const direct_lidar_inertial_odometry__srv__SavePCD_Response * input,
  direct_lidar_inertial_odometry__srv__SavePCD_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

direct_lidar_inertial_odometry__srv__SavePCD_Response *
direct_lidar_inertial_odometry__srv__SavePCD_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  direct_lidar_inertial_odometry__srv__SavePCD_Response * msg = (direct_lidar_inertial_odometry__srv__SavePCD_Response *)allocator.allocate(sizeof(direct_lidar_inertial_odometry__srv__SavePCD_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(direct_lidar_inertial_odometry__srv__SavePCD_Response));
  bool success = direct_lidar_inertial_odometry__srv__SavePCD_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
direct_lidar_inertial_odometry__srv__SavePCD_Response__destroy(direct_lidar_inertial_odometry__srv__SavePCD_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    direct_lidar_inertial_odometry__srv__SavePCD_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
direct_lidar_inertial_odometry__srv__SavePCD_Response__Sequence__init(direct_lidar_inertial_odometry__srv__SavePCD_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  direct_lidar_inertial_odometry__srv__SavePCD_Response * data = NULL;

  if (size) {
    data = (direct_lidar_inertial_odometry__srv__SavePCD_Response *)allocator.zero_allocate(size, sizeof(direct_lidar_inertial_odometry__srv__SavePCD_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = direct_lidar_inertial_odometry__srv__SavePCD_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        direct_lidar_inertial_odometry__srv__SavePCD_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
direct_lidar_inertial_odometry__srv__SavePCD_Response__Sequence__fini(direct_lidar_inertial_odometry__srv__SavePCD_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      direct_lidar_inertial_odometry__srv__SavePCD_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

direct_lidar_inertial_odometry__srv__SavePCD_Response__Sequence *
direct_lidar_inertial_odometry__srv__SavePCD_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  direct_lidar_inertial_odometry__srv__SavePCD_Response__Sequence * array = (direct_lidar_inertial_odometry__srv__SavePCD_Response__Sequence *)allocator.allocate(sizeof(direct_lidar_inertial_odometry__srv__SavePCD_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = direct_lidar_inertial_odometry__srv__SavePCD_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
direct_lidar_inertial_odometry__srv__SavePCD_Response__Sequence__destroy(direct_lidar_inertial_odometry__srv__SavePCD_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    direct_lidar_inertial_odometry__srv__SavePCD_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
direct_lidar_inertial_odometry__srv__SavePCD_Response__Sequence__are_equal(const direct_lidar_inertial_odometry__srv__SavePCD_Response__Sequence * lhs, const direct_lidar_inertial_odometry__srv__SavePCD_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!direct_lidar_inertial_odometry__srv__SavePCD_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
direct_lidar_inertial_odometry__srv__SavePCD_Response__Sequence__copy(
  const direct_lidar_inertial_odometry__srv__SavePCD_Response__Sequence * input,
  direct_lidar_inertial_odometry__srv__SavePCD_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(direct_lidar_inertial_odometry__srv__SavePCD_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    direct_lidar_inertial_odometry__srv__SavePCD_Response * data =
      (direct_lidar_inertial_odometry__srv__SavePCD_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!direct_lidar_inertial_odometry__srv__SavePCD_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          direct_lidar_inertial_odometry__srv__SavePCD_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!direct_lidar_inertial_odometry__srv__SavePCD_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

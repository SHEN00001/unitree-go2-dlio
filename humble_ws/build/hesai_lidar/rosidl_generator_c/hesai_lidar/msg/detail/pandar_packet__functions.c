// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hesai_lidar:msg/PandarPacket.idl
// generated code does not contain a copyright notice
#include "hesai_lidar/msg/detail/pandar_packet__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
hesai_lidar__msg__PandarPacket__init(hesai_lidar__msg__PandarPacket * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    hesai_lidar__msg__PandarPacket__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    hesai_lidar__msg__PandarPacket__fini(msg);
    return false;
  }
  // size
  return true;
}

void
hesai_lidar__msg__PandarPacket__fini(hesai_lidar__msg__PandarPacket * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
  // size
}

bool
hesai_lidar__msg__PandarPacket__are_equal(const hesai_lidar__msg__PandarPacket * lhs, const hesai_lidar__msg__PandarPacket * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // size
  if (lhs->size != rhs->size) {
    return false;
  }
  return true;
}

bool
hesai_lidar__msg__PandarPacket__copy(
  const hesai_lidar__msg__PandarPacket * input,
  hesai_lidar__msg__PandarPacket * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // size
  output->size = input->size;
  return true;
}

hesai_lidar__msg__PandarPacket *
hesai_lidar__msg__PandarPacket__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hesai_lidar__msg__PandarPacket * msg = (hesai_lidar__msg__PandarPacket *)allocator.allocate(sizeof(hesai_lidar__msg__PandarPacket), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hesai_lidar__msg__PandarPacket));
  bool success = hesai_lidar__msg__PandarPacket__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hesai_lidar__msg__PandarPacket__destroy(hesai_lidar__msg__PandarPacket * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hesai_lidar__msg__PandarPacket__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hesai_lidar__msg__PandarPacket__Sequence__init(hesai_lidar__msg__PandarPacket__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hesai_lidar__msg__PandarPacket * data = NULL;

  if (size) {
    data = (hesai_lidar__msg__PandarPacket *)allocator.zero_allocate(size, sizeof(hesai_lidar__msg__PandarPacket), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hesai_lidar__msg__PandarPacket__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hesai_lidar__msg__PandarPacket__fini(&data[i - 1]);
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
hesai_lidar__msg__PandarPacket__Sequence__fini(hesai_lidar__msg__PandarPacket__Sequence * array)
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
      hesai_lidar__msg__PandarPacket__fini(&array->data[i]);
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

hesai_lidar__msg__PandarPacket__Sequence *
hesai_lidar__msg__PandarPacket__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hesai_lidar__msg__PandarPacket__Sequence * array = (hesai_lidar__msg__PandarPacket__Sequence *)allocator.allocate(sizeof(hesai_lidar__msg__PandarPacket__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hesai_lidar__msg__PandarPacket__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hesai_lidar__msg__PandarPacket__Sequence__destroy(hesai_lidar__msg__PandarPacket__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hesai_lidar__msg__PandarPacket__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hesai_lidar__msg__PandarPacket__Sequence__are_equal(const hesai_lidar__msg__PandarPacket__Sequence * lhs, const hesai_lidar__msg__PandarPacket__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hesai_lidar__msg__PandarPacket__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hesai_lidar__msg__PandarPacket__Sequence__copy(
  const hesai_lidar__msg__PandarPacket__Sequence * input,
  hesai_lidar__msg__PandarPacket__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hesai_lidar__msg__PandarPacket);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hesai_lidar__msg__PandarPacket * data =
      (hesai_lidar__msg__PandarPacket *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hesai_lidar__msg__PandarPacket__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hesai_lidar__msg__PandarPacket__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hesai_lidar__msg__PandarPacket__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

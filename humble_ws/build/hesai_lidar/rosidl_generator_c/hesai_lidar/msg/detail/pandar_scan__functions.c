// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hesai_lidar:msg/PandarScan.idl
// generated code does not contain a copyright notice
#include "hesai_lidar/msg/detail/pandar_scan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `packets`
#include "hesai_lidar/msg/detail/pandar_packet__functions.h"

bool
hesai_lidar__msg__PandarScan__init(hesai_lidar__msg__PandarScan * msg)
{
  if (!msg) {
    return false;
  }
  // packets
  if (!hesai_lidar__msg__PandarPacket__Sequence__init(&msg->packets, 0)) {
    hesai_lidar__msg__PandarScan__fini(msg);
    return false;
  }
  return true;
}

void
hesai_lidar__msg__PandarScan__fini(hesai_lidar__msg__PandarScan * msg)
{
  if (!msg) {
    return;
  }
  // packets
  hesai_lidar__msg__PandarPacket__Sequence__fini(&msg->packets);
}

bool
hesai_lidar__msg__PandarScan__are_equal(const hesai_lidar__msg__PandarScan * lhs, const hesai_lidar__msg__PandarScan * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // packets
  if (!hesai_lidar__msg__PandarPacket__Sequence__are_equal(
      &(lhs->packets), &(rhs->packets)))
  {
    return false;
  }
  return true;
}

bool
hesai_lidar__msg__PandarScan__copy(
  const hesai_lidar__msg__PandarScan * input,
  hesai_lidar__msg__PandarScan * output)
{
  if (!input || !output) {
    return false;
  }
  // packets
  if (!hesai_lidar__msg__PandarPacket__Sequence__copy(
      &(input->packets), &(output->packets)))
  {
    return false;
  }
  return true;
}

hesai_lidar__msg__PandarScan *
hesai_lidar__msg__PandarScan__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hesai_lidar__msg__PandarScan * msg = (hesai_lidar__msg__PandarScan *)allocator.allocate(sizeof(hesai_lidar__msg__PandarScan), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hesai_lidar__msg__PandarScan));
  bool success = hesai_lidar__msg__PandarScan__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hesai_lidar__msg__PandarScan__destroy(hesai_lidar__msg__PandarScan * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hesai_lidar__msg__PandarScan__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hesai_lidar__msg__PandarScan__Sequence__init(hesai_lidar__msg__PandarScan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hesai_lidar__msg__PandarScan * data = NULL;

  if (size) {
    data = (hesai_lidar__msg__PandarScan *)allocator.zero_allocate(size, sizeof(hesai_lidar__msg__PandarScan), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hesai_lidar__msg__PandarScan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hesai_lidar__msg__PandarScan__fini(&data[i - 1]);
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
hesai_lidar__msg__PandarScan__Sequence__fini(hesai_lidar__msg__PandarScan__Sequence * array)
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
      hesai_lidar__msg__PandarScan__fini(&array->data[i]);
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

hesai_lidar__msg__PandarScan__Sequence *
hesai_lidar__msg__PandarScan__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hesai_lidar__msg__PandarScan__Sequence * array = (hesai_lidar__msg__PandarScan__Sequence *)allocator.allocate(sizeof(hesai_lidar__msg__PandarScan__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hesai_lidar__msg__PandarScan__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hesai_lidar__msg__PandarScan__Sequence__destroy(hesai_lidar__msg__PandarScan__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hesai_lidar__msg__PandarScan__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hesai_lidar__msg__PandarScan__Sequence__are_equal(const hesai_lidar__msg__PandarScan__Sequence * lhs, const hesai_lidar__msg__PandarScan__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hesai_lidar__msg__PandarScan__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hesai_lidar__msg__PandarScan__Sequence__copy(
  const hesai_lidar__msg__PandarScan__Sequence * input,
  hesai_lidar__msg__PandarScan__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hesai_lidar__msg__PandarScan);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hesai_lidar__msg__PandarScan * data =
      (hesai_lidar__msg__PandarScan *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hesai_lidar__msg__PandarScan__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hesai_lidar__msg__PandarScan__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hesai_lidar__msg__PandarScan__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

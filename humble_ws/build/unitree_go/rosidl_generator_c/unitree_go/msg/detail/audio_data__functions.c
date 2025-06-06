// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unitree_go:msg/AudioData.idl
// generated code does not contain a copyright notice
#include "unitree_go/msg/detail/audio_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
unitree_go__msg__AudioData__init(unitree_go__msg__AudioData * msg)
{
  if (!msg) {
    return false;
  }
  // time_frame
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    unitree_go__msg__AudioData__fini(msg);
    return false;
  }
  return true;
}

void
unitree_go__msg__AudioData__fini(unitree_go__msg__AudioData * msg)
{
  if (!msg) {
    return;
  }
  // time_frame
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
unitree_go__msg__AudioData__are_equal(const unitree_go__msg__AudioData * lhs, const unitree_go__msg__AudioData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_frame
  if (lhs->time_frame != rhs->time_frame) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
unitree_go__msg__AudioData__copy(
  const unitree_go__msg__AudioData * input,
  unitree_go__msg__AudioData * output)
{
  if (!input || !output) {
    return false;
  }
  // time_frame
  output->time_frame = input->time_frame;
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

unitree_go__msg__AudioData *
unitree_go__msg__AudioData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_go__msg__AudioData * msg = (unitree_go__msg__AudioData *)allocator.allocate(sizeof(unitree_go__msg__AudioData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unitree_go__msg__AudioData));
  bool success = unitree_go__msg__AudioData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
unitree_go__msg__AudioData__destroy(unitree_go__msg__AudioData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    unitree_go__msg__AudioData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
unitree_go__msg__AudioData__Sequence__init(unitree_go__msg__AudioData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_go__msg__AudioData * data = NULL;

  if (size) {
    data = (unitree_go__msg__AudioData *)allocator.zero_allocate(size, sizeof(unitree_go__msg__AudioData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unitree_go__msg__AudioData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unitree_go__msg__AudioData__fini(&data[i - 1]);
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
unitree_go__msg__AudioData__Sequence__fini(unitree_go__msg__AudioData__Sequence * array)
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
      unitree_go__msg__AudioData__fini(&array->data[i]);
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

unitree_go__msg__AudioData__Sequence *
unitree_go__msg__AudioData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_go__msg__AudioData__Sequence * array = (unitree_go__msg__AudioData__Sequence *)allocator.allocate(sizeof(unitree_go__msg__AudioData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = unitree_go__msg__AudioData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
unitree_go__msg__AudioData__Sequence__destroy(unitree_go__msg__AudioData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    unitree_go__msg__AudioData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
unitree_go__msg__AudioData__Sequence__are_equal(const unitree_go__msg__AudioData__Sequence * lhs, const unitree_go__msg__AudioData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!unitree_go__msg__AudioData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
unitree_go__msg__AudioData__Sequence__copy(
  const unitree_go__msg__AudioData__Sequence * input,
  unitree_go__msg__AudioData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(unitree_go__msg__AudioData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    unitree_go__msg__AudioData * data =
      (unitree_go__msg__AudioData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!unitree_go__msg__AudioData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          unitree_go__msg__AudioData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!unitree_go__msg__AudioData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

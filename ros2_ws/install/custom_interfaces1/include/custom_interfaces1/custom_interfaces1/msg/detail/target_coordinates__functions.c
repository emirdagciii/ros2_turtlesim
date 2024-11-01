// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interfaces1:msg/TargetCoordinates.idl
// generated code does not contain a copyright notice
#include "custom_interfaces1/msg/detail/target_coordinates__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `coordinates`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
custom_interfaces1__msg__TargetCoordinates__init(custom_interfaces1__msg__TargetCoordinates * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    custom_interfaces1__msg__TargetCoordinates__fini(msg);
    return false;
  }
  // coordinates
  if (!geometry_msgs__msg__Point__init(&msg->coordinates)) {
    custom_interfaces1__msg__TargetCoordinates__fini(msg);
    return false;
  }
  return true;
}

void
custom_interfaces1__msg__TargetCoordinates__fini(custom_interfaces1__msg__TargetCoordinates * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // coordinates
  geometry_msgs__msg__Point__fini(&msg->coordinates);
}

bool
custom_interfaces1__msg__TargetCoordinates__are_equal(const custom_interfaces1__msg__TargetCoordinates * lhs, const custom_interfaces1__msg__TargetCoordinates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // coordinates
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->coordinates), &(rhs->coordinates)))
  {
    return false;
  }
  return true;
}

bool
custom_interfaces1__msg__TargetCoordinates__copy(
  const custom_interfaces1__msg__TargetCoordinates * input,
  custom_interfaces1__msg__TargetCoordinates * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // coordinates
  if (!geometry_msgs__msg__Point__copy(
      &(input->coordinates), &(output->coordinates)))
  {
    return false;
  }
  return true;
}

custom_interfaces1__msg__TargetCoordinates *
custom_interfaces1__msg__TargetCoordinates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces1__msg__TargetCoordinates * msg = (custom_interfaces1__msg__TargetCoordinates *)allocator.allocate(sizeof(custom_interfaces1__msg__TargetCoordinates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces1__msg__TargetCoordinates));
  bool success = custom_interfaces1__msg__TargetCoordinates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_interfaces1__msg__TargetCoordinates__destroy(custom_interfaces1__msg__TargetCoordinates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_interfaces1__msg__TargetCoordinates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_interfaces1__msg__TargetCoordinates__Sequence__init(custom_interfaces1__msg__TargetCoordinates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces1__msg__TargetCoordinates * data = NULL;

  if (size) {
    data = (custom_interfaces1__msg__TargetCoordinates *)allocator.zero_allocate(size, sizeof(custom_interfaces1__msg__TargetCoordinates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces1__msg__TargetCoordinates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces1__msg__TargetCoordinates__fini(&data[i - 1]);
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
custom_interfaces1__msg__TargetCoordinates__Sequence__fini(custom_interfaces1__msg__TargetCoordinates__Sequence * array)
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
      custom_interfaces1__msg__TargetCoordinates__fini(&array->data[i]);
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

custom_interfaces1__msg__TargetCoordinates__Sequence *
custom_interfaces1__msg__TargetCoordinates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces1__msg__TargetCoordinates__Sequence * array = (custom_interfaces1__msg__TargetCoordinates__Sequence *)allocator.allocate(sizeof(custom_interfaces1__msg__TargetCoordinates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces1__msg__TargetCoordinates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_interfaces1__msg__TargetCoordinates__Sequence__destroy(custom_interfaces1__msg__TargetCoordinates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_interfaces1__msg__TargetCoordinates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_interfaces1__msg__TargetCoordinates__Sequence__are_equal(const custom_interfaces1__msg__TargetCoordinates__Sequence * lhs, const custom_interfaces1__msg__TargetCoordinates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces1__msg__TargetCoordinates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces1__msg__TargetCoordinates__Sequence__copy(
  const custom_interfaces1__msg__TargetCoordinates__Sequence * input,
  custom_interfaces1__msg__TargetCoordinates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces1__msg__TargetCoordinates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_interfaces1__msg__TargetCoordinates * data =
      (custom_interfaces1__msg__TargetCoordinates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces1__msg__TargetCoordinates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_interfaces1__msg__TargetCoordinates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interfaces1__msg__TargetCoordinates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

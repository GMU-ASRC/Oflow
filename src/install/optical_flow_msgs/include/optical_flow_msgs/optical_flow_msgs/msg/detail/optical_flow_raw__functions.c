// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from optical_flow_msgs:msg/OpticalFlowRaw.idl
// generated code does not contain a copyright notice
#include "optical_flow_msgs/msg/detail/optical_flow_raw__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
optical_flow_msgs__msg__OpticalFlowRaw__init(optical_flow_msgs__msg__OpticalFlowRaw * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    optical_flow_msgs__msg__OpticalFlowRaw__fini(msg);
    return false;
  }
  // integrated_x_rad
  // integrated_y_rad
  // integration_time_us
  // quality
  return true;
}

void
optical_flow_msgs__msg__OpticalFlowRaw__fini(optical_flow_msgs__msg__OpticalFlowRaw * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // integrated_x_rad
  // integrated_y_rad
  // integration_time_us
  // quality
}

bool
optical_flow_msgs__msg__OpticalFlowRaw__are_equal(const optical_flow_msgs__msg__OpticalFlowRaw * lhs, const optical_flow_msgs__msg__OpticalFlowRaw * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // integrated_x_rad
  if (lhs->integrated_x_rad != rhs->integrated_x_rad) {
    return false;
  }
  // integrated_y_rad
  if (lhs->integrated_y_rad != rhs->integrated_y_rad) {
    return false;
  }
  // integration_time_us
  if (lhs->integration_time_us != rhs->integration_time_us) {
    return false;
  }
  // quality
  if (lhs->quality != rhs->quality) {
    return false;
  }
  return true;
}

bool
optical_flow_msgs__msg__OpticalFlowRaw__copy(
  const optical_flow_msgs__msg__OpticalFlowRaw * input,
  optical_flow_msgs__msg__OpticalFlowRaw * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // integrated_x_rad
  output->integrated_x_rad = input->integrated_x_rad;
  // integrated_y_rad
  output->integrated_y_rad = input->integrated_y_rad;
  // integration_time_us
  output->integration_time_us = input->integration_time_us;
  // quality
  output->quality = input->quality;
  return true;
}

optical_flow_msgs__msg__OpticalFlowRaw *
optical_flow_msgs__msg__OpticalFlowRaw__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optical_flow_msgs__msg__OpticalFlowRaw * msg = (optical_flow_msgs__msg__OpticalFlowRaw *)allocator.allocate(sizeof(optical_flow_msgs__msg__OpticalFlowRaw), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(optical_flow_msgs__msg__OpticalFlowRaw));
  bool success = optical_flow_msgs__msg__OpticalFlowRaw__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
optical_flow_msgs__msg__OpticalFlowRaw__destroy(optical_flow_msgs__msg__OpticalFlowRaw * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    optical_flow_msgs__msg__OpticalFlowRaw__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
optical_flow_msgs__msg__OpticalFlowRaw__Sequence__init(optical_flow_msgs__msg__OpticalFlowRaw__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optical_flow_msgs__msg__OpticalFlowRaw * data = NULL;

  if (size) {
    data = (optical_flow_msgs__msg__OpticalFlowRaw *)allocator.zero_allocate(size, sizeof(optical_flow_msgs__msg__OpticalFlowRaw), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = optical_flow_msgs__msg__OpticalFlowRaw__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        optical_flow_msgs__msg__OpticalFlowRaw__fini(&data[i - 1]);
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
optical_flow_msgs__msg__OpticalFlowRaw__Sequence__fini(optical_flow_msgs__msg__OpticalFlowRaw__Sequence * array)
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
      optical_flow_msgs__msg__OpticalFlowRaw__fini(&array->data[i]);
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

optical_flow_msgs__msg__OpticalFlowRaw__Sequence *
optical_flow_msgs__msg__OpticalFlowRaw__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optical_flow_msgs__msg__OpticalFlowRaw__Sequence * array = (optical_flow_msgs__msg__OpticalFlowRaw__Sequence *)allocator.allocate(sizeof(optical_flow_msgs__msg__OpticalFlowRaw__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = optical_flow_msgs__msg__OpticalFlowRaw__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
optical_flow_msgs__msg__OpticalFlowRaw__Sequence__destroy(optical_flow_msgs__msg__OpticalFlowRaw__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    optical_flow_msgs__msg__OpticalFlowRaw__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
optical_flow_msgs__msg__OpticalFlowRaw__Sequence__are_equal(const optical_flow_msgs__msg__OpticalFlowRaw__Sequence * lhs, const optical_flow_msgs__msg__OpticalFlowRaw__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!optical_flow_msgs__msg__OpticalFlowRaw__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
optical_flow_msgs__msg__OpticalFlowRaw__Sequence__copy(
  const optical_flow_msgs__msg__OpticalFlowRaw__Sequence * input,
  optical_flow_msgs__msg__OpticalFlowRaw__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(optical_flow_msgs__msg__OpticalFlowRaw);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    optical_flow_msgs__msg__OpticalFlowRaw * data =
      (optical_flow_msgs__msg__OpticalFlowRaw *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!optical_flow_msgs__msg__OpticalFlowRaw__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          optical_flow_msgs__msg__OpticalFlowRaw__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!optical_flow_msgs__msg__OpticalFlowRaw__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

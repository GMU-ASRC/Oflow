// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from optical_flow_msgs:msg/OpticalFlowRaw.idl
// generated code does not contain a copyright notice

#ifndef OPTICAL_FLOW_MSGS__MSG__DETAIL__OPTICAL_FLOW_RAW__STRUCT_H_
#define OPTICAL_FLOW_MSGS__MSG__DETAIL__OPTICAL_FLOW_RAW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/OpticalFlowRaw in the package optical_flow_msgs.
typedef struct optical_flow_msgs__msg__OpticalFlowRaw
{
  std_msgs__msg__Header header;
  float integrated_x_rad;
  float integrated_y_rad;
  uint32_t integration_time_us;
  uint8_t quality;
} optical_flow_msgs__msg__OpticalFlowRaw;

// Struct for a sequence of optical_flow_msgs__msg__OpticalFlowRaw.
typedef struct optical_flow_msgs__msg__OpticalFlowRaw__Sequence
{
  optical_flow_msgs__msg__OpticalFlowRaw * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} optical_flow_msgs__msg__OpticalFlowRaw__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPTICAL_FLOW_MSGS__MSG__DETAIL__OPTICAL_FLOW_RAW__STRUCT_H_

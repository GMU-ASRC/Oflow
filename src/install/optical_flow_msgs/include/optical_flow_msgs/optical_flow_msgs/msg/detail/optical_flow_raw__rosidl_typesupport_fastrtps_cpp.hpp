// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from optical_flow_msgs:msg/OpticalFlowRaw.idl
// generated code does not contain a copyright notice

#ifndef OPTICAL_FLOW_MSGS__MSG__DETAIL__OPTICAL_FLOW_RAW__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define OPTICAL_FLOW_MSGS__MSG__DETAIL__OPTICAL_FLOW_RAW__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "optical_flow_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "optical_flow_msgs/msg/detail/optical_flow_raw__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace optical_flow_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_optical_flow_msgs
cdr_serialize(
  const optical_flow_msgs::msg::OpticalFlowRaw & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_optical_flow_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  optical_flow_msgs::msg::OpticalFlowRaw & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_optical_flow_msgs
get_serialized_size(
  const optical_flow_msgs::msg::OpticalFlowRaw & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_optical_flow_msgs
max_serialized_size_OpticalFlowRaw(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace optical_flow_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_optical_flow_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, optical_flow_msgs, msg, OpticalFlowRaw)();

#ifdef __cplusplus
}
#endif

#endif  // OPTICAL_FLOW_MSGS__MSG__DETAIL__OPTICAL_FLOW_RAW__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

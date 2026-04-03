// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from optical_flow_msgs:msg/OpticalFlowRaw.idl
// generated code does not contain a copyright notice

#ifndef OPTICAL_FLOW_MSGS__MSG__DETAIL__OPTICAL_FLOW_RAW__BUILDER_HPP_
#define OPTICAL_FLOW_MSGS__MSG__DETAIL__OPTICAL_FLOW_RAW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "optical_flow_msgs/msg/detail/optical_flow_raw__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace optical_flow_msgs
{

namespace msg
{

namespace builder
{

class Init_OpticalFlowRaw_quality
{
public:
  explicit Init_OpticalFlowRaw_quality(::optical_flow_msgs::msg::OpticalFlowRaw & msg)
  : msg_(msg)
  {}
  ::optical_flow_msgs::msg::OpticalFlowRaw quality(::optical_flow_msgs::msg::OpticalFlowRaw::_quality_type arg)
  {
    msg_.quality = std::move(arg);
    return std::move(msg_);
  }

private:
  ::optical_flow_msgs::msg::OpticalFlowRaw msg_;
};

class Init_OpticalFlowRaw_integration_time_us
{
public:
  explicit Init_OpticalFlowRaw_integration_time_us(::optical_flow_msgs::msg::OpticalFlowRaw & msg)
  : msg_(msg)
  {}
  Init_OpticalFlowRaw_quality integration_time_us(::optical_flow_msgs::msg::OpticalFlowRaw::_integration_time_us_type arg)
  {
    msg_.integration_time_us = std::move(arg);
    return Init_OpticalFlowRaw_quality(msg_);
  }

private:
  ::optical_flow_msgs::msg::OpticalFlowRaw msg_;
};

class Init_OpticalFlowRaw_integrated_y_rad
{
public:
  explicit Init_OpticalFlowRaw_integrated_y_rad(::optical_flow_msgs::msg::OpticalFlowRaw & msg)
  : msg_(msg)
  {}
  Init_OpticalFlowRaw_integration_time_us integrated_y_rad(::optical_flow_msgs::msg::OpticalFlowRaw::_integrated_y_rad_type arg)
  {
    msg_.integrated_y_rad = std::move(arg);
    return Init_OpticalFlowRaw_integration_time_us(msg_);
  }

private:
  ::optical_flow_msgs::msg::OpticalFlowRaw msg_;
};

class Init_OpticalFlowRaw_integrated_x_rad
{
public:
  explicit Init_OpticalFlowRaw_integrated_x_rad(::optical_flow_msgs::msg::OpticalFlowRaw & msg)
  : msg_(msg)
  {}
  Init_OpticalFlowRaw_integrated_y_rad integrated_x_rad(::optical_flow_msgs::msg::OpticalFlowRaw::_integrated_x_rad_type arg)
  {
    msg_.integrated_x_rad = std::move(arg);
    return Init_OpticalFlowRaw_integrated_y_rad(msg_);
  }

private:
  ::optical_flow_msgs::msg::OpticalFlowRaw msg_;
};

class Init_OpticalFlowRaw_header
{
public:
  Init_OpticalFlowRaw_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpticalFlowRaw_integrated_x_rad header(::optical_flow_msgs::msg::OpticalFlowRaw::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OpticalFlowRaw_integrated_x_rad(msg_);
  }

private:
  ::optical_flow_msgs::msg::OpticalFlowRaw msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::optical_flow_msgs::msg::OpticalFlowRaw>()
{
  return optical_flow_msgs::msg::builder::Init_OpticalFlowRaw_header();
}

}  // namespace optical_flow_msgs

#endif  // OPTICAL_FLOW_MSGS__MSG__DETAIL__OPTICAL_FLOW_RAW__BUILDER_HPP_

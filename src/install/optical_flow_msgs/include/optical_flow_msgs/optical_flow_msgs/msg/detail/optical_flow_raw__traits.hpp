// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from optical_flow_msgs:msg/OpticalFlowRaw.idl
// generated code does not contain a copyright notice

#ifndef OPTICAL_FLOW_MSGS__MSG__DETAIL__OPTICAL_FLOW_RAW__TRAITS_HPP_
#define OPTICAL_FLOW_MSGS__MSG__DETAIL__OPTICAL_FLOW_RAW__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "optical_flow_msgs/msg/detail/optical_flow_raw__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace optical_flow_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OpticalFlowRaw & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: integrated_x_rad
  {
    out << "integrated_x_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.integrated_x_rad, out);
    out << ", ";
  }

  // member: integrated_y_rad
  {
    out << "integrated_y_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.integrated_y_rad, out);
    out << ", ";
  }

  // member: integration_time_us
  {
    out << "integration_time_us: ";
    rosidl_generator_traits::value_to_yaml(msg.integration_time_us, out);
    out << ", ";
  }

  // member: quality
  {
    out << "quality: ";
    rosidl_generator_traits::value_to_yaml(msg.quality, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OpticalFlowRaw & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: integrated_x_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integrated_x_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.integrated_x_rad, out);
    out << "\n";
  }

  // member: integrated_y_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integrated_y_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.integrated_y_rad, out);
    out << "\n";
  }

  // member: integration_time_us
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integration_time_us: ";
    rosidl_generator_traits::value_to_yaml(msg.integration_time_us, out);
    out << "\n";
  }

  // member: quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality: ";
    rosidl_generator_traits::value_to_yaml(msg.quality, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OpticalFlowRaw & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace optical_flow_msgs

namespace rosidl_generator_traits
{

[[deprecated("use optical_flow_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const optical_flow_msgs::msg::OpticalFlowRaw & msg,
  std::ostream & out, size_t indentation = 0)
{
  optical_flow_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use optical_flow_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const optical_flow_msgs::msg::OpticalFlowRaw & msg)
{
  return optical_flow_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<optical_flow_msgs::msg::OpticalFlowRaw>()
{
  return "optical_flow_msgs::msg::OpticalFlowRaw";
}

template<>
inline const char * name<optical_flow_msgs::msg::OpticalFlowRaw>()
{
  return "optical_flow_msgs/msg/OpticalFlowRaw";
}

template<>
struct has_fixed_size<optical_flow_msgs::msg::OpticalFlowRaw>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<optical_flow_msgs::msg::OpticalFlowRaw>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<optical_flow_msgs::msg::OpticalFlowRaw>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OPTICAL_FLOW_MSGS__MSG__DETAIL__OPTICAL_FLOW_RAW__TRAITS_HPP_

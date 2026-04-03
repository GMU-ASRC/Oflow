// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from optical_flow_msgs:msg/OpticalFlowRaw.idl
// generated code does not contain a copyright notice

#ifndef OPTICAL_FLOW_MSGS__MSG__DETAIL__OPTICAL_FLOW_RAW__STRUCT_HPP_
#define OPTICAL_FLOW_MSGS__MSG__DETAIL__OPTICAL_FLOW_RAW__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__optical_flow_msgs__msg__OpticalFlowRaw __attribute__((deprecated))
#else
# define DEPRECATED__optical_flow_msgs__msg__OpticalFlowRaw __declspec(deprecated)
#endif

namespace optical_flow_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OpticalFlowRaw_
{
  using Type = OpticalFlowRaw_<ContainerAllocator>;

  explicit OpticalFlowRaw_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->integrated_x_rad = 0.0f;
      this->integrated_y_rad = 0.0f;
      this->integration_time_us = 0ul;
      this->quality = 0;
    }
  }

  explicit OpticalFlowRaw_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->integrated_x_rad = 0.0f;
      this->integrated_y_rad = 0.0f;
      this->integration_time_us = 0ul;
      this->quality = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _integrated_x_rad_type =
    float;
  _integrated_x_rad_type integrated_x_rad;
  using _integrated_y_rad_type =
    float;
  _integrated_y_rad_type integrated_y_rad;
  using _integration_time_us_type =
    uint32_t;
  _integration_time_us_type integration_time_us;
  using _quality_type =
    uint8_t;
  _quality_type quality;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__integrated_x_rad(
    const float & _arg)
  {
    this->integrated_x_rad = _arg;
    return *this;
  }
  Type & set__integrated_y_rad(
    const float & _arg)
  {
    this->integrated_y_rad = _arg;
    return *this;
  }
  Type & set__integration_time_us(
    const uint32_t & _arg)
  {
    this->integration_time_us = _arg;
    return *this;
  }
  Type & set__quality(
    const uint8_t & _arg)
  {
    this->quality = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    optical_flow_msgs::msg::OpticalFlowRaw_<ContainerAllocator> *;
  using ConstRawPtr =
    const optical_flow_msgs::msg::OpticalFlowRaw_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<optical_flow_msgs::msg::OpticalFlowRaw_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<optical_flow_msgs::msg::OpticalFlowRaw_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      optical_flow_msgs::msg::OpticalFlowRaw_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<optical_flow_msgs::msg::OpticalFlowRaw_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      optical_flow_msgs::msg::OpticalFlowRaw_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<optical_flow_msgs::msg::OpticalFlowRaw_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<optical_flow_msgs::msg::OpticalFlowRaw_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<optical_flow_msgs::msg::OpticalFlowRaw_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__optical_flow_msgs__msg__OpticalFlowRaw
    std::shared_ptr<optical_flow_msgs::msg::OpticalFlowRaw_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__optical_flow_msgs__msg__OpticalFlowRaw
    std::shared_ptr<optical_flow_msgs::msg::OpticalFlowRaw_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpticalFlowRaw_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->integrated_x_rad != other.integrated_x_rad) {
      return false;
    }
    if (this->integrated_y_rad != other.integrated_y_rad) {
      return false;
    }
    if (this->integration_time_us != other.integration_time_us) {
      return false;
    }
    if (this->quality != other.quality) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpticalFlowRaw_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpticalFlowRaw_

// alias to use template instance with default allocator
using OpticalFlowRaw =
  optical_flow_msgs::msg::OpticalFlowRaw_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace optical_flow_msgs

#endif  // OPTICAL_FLOW_MSGS__MSG__DETAIL__OPTICAL_FLOW_RAW__STRUCT_HPP_

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from optical_flow_msgs:msg/OpticalFlowRaw.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "optical_flow_msgs/msg/detail/optical_flow_raw__rosidl_typesupport_introspection_c.h"
#include "optical_flow_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "optical_flow_msgs/msg/detail/optical_flow_raw__functions.h"
#include "optical_flow_msgs/msg/detail/optical_flow_raw__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void optical_flow_msgs__msg__OpticalFlowRaw__rosidl_typesupport_introspection_c__OpticalFlowRaw_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  optical_flow_msgs__msg__OpticalFlowRaw__init(message_memory);
}

void optical_flow_msgs__msg__OpticalFlowRaw__rosidl_typesupport_introspection_c__OpticalFlowRaw_fini_function(void * message_memory)
{
  optical_flow_msgs__msg__OpticalFlowRaw__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember optical_flow_msgs__msg__OpticalFlowRaw__rosidl_typesupport_introspection_c__OpticalFlowRaw_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(optical_flow_msgs__msg__OpticalFlowRaw, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "integrated_x_rad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(optical_flow_msgs__msg__OpticalFlowRaw, integrated_x_rad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "integrated_y_rad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(optical_flow_msgs__msg__OpticalFlowRaw, integrated_y_rad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "integration_time_us",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(optical_flow_msgs__msg__OpticalFlowRaw, integration_time_us),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quality",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(optical_flow_msgs__msg__OpticalFlowRaw, quality),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers optical_flow_msgs__msg__OpticalFlowRaw__rosidl_typesupport_introspection_c__OpticalFlowRaw_message_members = {
  "optical_flow_msgs__msg",  // message namespace
  "OpticalFlowRaw",  // message name
  5,  // number of fields
  sizeof(optical_flow_msgs__msg__OpticalFlowRaw),
  optical_flow_msgs__msg__OpticalFlowRaw__rosidl_typesupport_introspection_c__OpticalFlowRaw_message_member_array,  // message members
  optical_flow_msgs__msg__OpticalFlowRaw__rosidl_typesupport_introspection_c__OpticalFlowRaw_init_function,  // function to initialize message memory (memory has to be allocated)
  optical_flow_msgs__msg__OpticalFlowRaw__rosidl_typesupport_introspection_c__OpticalFlowRaw_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t optical_flow_msgs__msg__OpticalFlowRaw__rosidl_typesupport_introspection_c__OpticalFlowRaw_message_type_support_handle = {
  0,
  &optical_flow_msgs__msg__OpticalFlowRaw__rosidl_typesupport_introspection_c__OpticalFlowRaw_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_optical_flow_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, optical_flow_msgs, msg, OpticalFlowRaw)() {
  optical_flow_msgs__msg__OpticalFlowRaw__rosidl_typesupport_introspection_c__OpticalFlowRaw_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!optical_flow_msgs__msg__OpticalFlowRaw__rosidl_typesupport_introspection_c__OpticalFlowRaw_message_type_support_handle.typesupport_identifier) {
    optical_flow_msgs__msg__OpticalFlowRaw__rosidl_typesupport_introspection_c__OpticalFlowRaw_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &optical_flow_msgs__msg__OpticalFlowRaw__rosidl_typesupport_introspection_c__OpticalFlowRaw_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

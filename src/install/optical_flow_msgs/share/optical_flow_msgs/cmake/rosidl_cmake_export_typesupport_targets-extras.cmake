# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:optical_flow_msgs__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:optical_flow_msgs__rosidl_typesupport_fastrtps_c;__rosidl_typesupport_introspection_c:optical_flow_msgs__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:optical_flow_msgs__rosidl_typesupport_c;__rosidl_generator_cpp:optical_flow_msgs__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:optical_flow_msgs__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_cpp:optical_flow_msgs__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:optical_flow_msgs__rosidl_typesupport_cpp;__rosidl_generator_py:optical_flow_msgs__rosidl_generator_py")

# populate optical_flow_msgs_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "optical_flow_msgs::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'optical_flow_msgs' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND optical_flow_msgs_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()

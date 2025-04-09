# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:direct_lidar_inertial_odometry__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:direct_lidar_inertial_odometry__rosidl_typesupport_fastrtps_c;__rosidl_typesupport_introspection_c:direct_lidar_inertial_odometry__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:direct_lidar_inertial_odometry__rosidl_typesupport_c;__rosidl_generator_cpp:direct_lidar_inertial_odometry__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:direct_lidar_inertial_odometry__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_cpp:direct_lidar_inertial_odometry__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:direct_lidar_inertial_odometry__rosidl_typesupport_cpp;__rosidl_generator_py:direct_lidar_inertial_odometry__rosidl_generator_py")

# populate direct_lidar_inertial_odometry_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "direct_lidar_inertial_odometry::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'direct_lidar_inertial_odometry' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND direct_lidar_inertial_odometry_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()

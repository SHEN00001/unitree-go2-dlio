# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_libraries.cmake.in

set(_exported_typesupport_libraries
  "__rosidl_typesupport_fastrtps_c:direct_lidar_inertial_odometry__rosidl_typesupport_fastrtps_c;__rosidl_typesupport_fastrtps_cpp:direct_lidar_inertial_odometry__rosidl_typesupport_fastrtps_cpp")

# populate direct_lidar_inertial_odometry_LIBRARIES_<suffix>
if(NOT _exported_typesupport_libraries STREQUAL "")
  # loop over typesupport libraries
  foreach(_tuple ${_exported_typesupport_libraries})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _library)

    if(NOT IS_ABSOLUTE "${_library}")
      # search for library target relative to this CMake file
      set(_lib "NOTFOUND")
      find_library(
        _lib NAMES "${_library}"
        PATHS "${direct_lidar_inertial_odometry_DIR}/../../../lib"
        NO_DEFAULT_PATH NO_CMAKE_FIND_ROOT_PATH
      )

      if(NOT _lib)
        # the library wasn't found
        message(FATAL_ERROR
          "Package 'direct_lidar_inertial_odometry' exports the typesupport library '${_library}' which couldn't be found")
      elseif(NOT IS_ABSOLUTE "${_lib}")
        # the found library must be an absolute path
        message(FATAL_ERROR
          "Package 'direct_lidar_inertial_odometry' found the typesupport library '${_library}' at '${_lib}' "
          "which is not an absolute path")
      elseif(NOT EXISTS "${_lib}")
        # the found library must exist
        message(FATAL_ERROR "Package 'direct_lidar_inertial_odometry' found the typesupport library '${_lib}' which doesn't exist")
      else()
        list(APPEND direct_lidar_inertial_odometry_LIBRARIES${_suffix} ${_cfg} "${_lib}")
      endif()

    else()
      if(NOT EXISTS "${_library}")
        # the found library must exist
        message(WARNING "Package 'direct_lidar_inertial_odometry' exports the typesupport library '${_library}' which doesn't exist")
      else()
        list(APPEND direct_lidar_inertial_odometry_LIBRARIES${_suffix} "${_library}")
      endif()
    endif()
  endforeach()
endif()

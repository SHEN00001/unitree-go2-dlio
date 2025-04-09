#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "direct_lidar_inertial_odometry::direct_lidar_inertial_odometry__rosidl_generator_py" for configuration "Release"
set_property(TARGET direct_lidar_inertial_odometry::direct_lidar_inertial_odometry__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(direct_lidar_inertial_odometry::direct_lidar_inertial_odometry__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libdirect_lidar_inertial_odometry__rosidl_generator_py.so"
  IMPORTED_SONAME_RELEASE "libdirect_lidar_inertial_odometry__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS direct_lidar_inertial_odometry::direct_lidar_inertial_odometry__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_direct_lidar_inertial_odometry::direct_lidar_inertial_odometry__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libdirect_lidar_inertial_odometry__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

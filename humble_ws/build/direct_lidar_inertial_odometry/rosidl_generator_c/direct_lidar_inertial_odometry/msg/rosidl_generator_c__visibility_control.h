// generated from rosidl_generator_c/resource/rosidl_generator_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef DIRECT_LIDAR_INERTIAL_ODOMETRY__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
#define DIRECT_LIDAR_INERTIAL_ODOMETRY__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_C_EXPORT_direct_lidar_inertial_odometry __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_C_IMPORT_direct_lidar_inertial_odometry __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_C_EXPORT_direct_lidar_inertial_odometry __declspec(dllexport)
    #define ROSIDL_GENERATOR_C_IMPORT_direct_lidar_inertial_odometry __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_C_BUILDING_DLL_direct_lidar_inertial_odometry
    #define ROSIDL_GENERATOR_C_PUBLIC_direct_lidar_inertial_odometry ROSIDL_GENERATOR_C_EXPORT_direct_lidar_inertial_odometry
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_direct_lidar_inertial_odometry ROSIDL_GENERATOR_C_IMPORT_direct_lidar_inertial_odometry
  #endif
#else
  #define ROSIDL_GENERATOR_C_EXPORT_direct_lidar_inertial_odometry __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_C_IMPORT_direct_lidar_inertial_odometry
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_C_PUBLIC_direct_lidar_inertial_odometry __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_direct_lidar_inertial_odometry
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // DIRECT_LIDAR_INERTIAL_ODOMETRY__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

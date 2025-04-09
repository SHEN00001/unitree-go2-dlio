// generated from
// rosidl_typesupport_introspection_c/resource/rosidl_typesupport_introspection_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef DIRECT_LIDAR_INERTIAL_ODOMETRY__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_
#define DIRECT_LIDAR_INERTIAL_ODOMETRY__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_direct_lidar_inertial_odometry __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_direct_lidar_inertial_odometry __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_direct_lidar_inertial_odometry __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_direct_lidar_inertial_odometry __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_INTROSPECTION_C_BUILDING_DLL_direct_lidar_inertial_odometry
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_direct_lidar_inertial_odometry ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_direct_lidar_inertial_odometry
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_direct_lidar_inertial_odometry ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_direct_lidar_inertial_odometry
  #endif
#else
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_direct_lidar_inertial_odometry __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_direct_lidar_inertial_odometry
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_direct_lidar_inertial_odometry __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_direct_lidar_inertial_odometry
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // DIRECT_LIDAR_INERTIAL_ODOMETRY__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_

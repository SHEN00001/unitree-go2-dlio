# Install script for directory: /external/src/unitree_ros2/cyclonedds_ws/src/cyclonedds-0.10.2/docs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/external/install/cyclonedds")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/CycloneDDS" TYPE FILE FILES
    "/external/src/unitree_ros2/cyclonedds_ws/src/cyclonedds-0.10.2/docs/../CONTRIBUTING.md"
    "/external/src/unitree_ros2/cyclonedds_ws/src/cyclonedds-0.10.2/docs/../CYCLONEDDS_QUALITY_DECLARATION.md"
    "/external/src/unitree_ros2/cyclonedds_ws/src/cyclonedds-0.10.2/docs/../LICENSE"
    "/external/src/unitree_ros2/cyclonedds_ws/src/cyclonedds-0.10.2/docs/../NOTICE.md"
    "/external/src/unitree_ros2/cyclonedds_ws/src/cyclonedds-0.10.2/docs/../README.md"
    "/external/src/unitree_ros2/cyclonedds_ws/src/cyclonedds-0.10.2/docs/../CHANGELOG.rst"
    )
endif()


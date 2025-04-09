# cmake_minimum_required(VERSION 2.8)
# project(PandarGeneral)


# find_package( Boost REQUIRED )
# find_package(PCL REQUIRED COMPONENTS common)
# find_package(tf2_ros REQUIRED)

# set (CMAKE_CXX_FLAGS "-fPIC --std=c++11")


# include_directories(
# 	.
# 	include
# 	${Boost_INCLUDE_DIRS}
# 	${PCL_INCLUDE_DIRS}
# )


# add_library( ${PROJECT_NAME}
# 	src/input.cc
# 	src/pandarGeneral_internal.cc
# 	src/pandarGeneral.cc
#     src/pcap_reader.cpp
# )

# target_link_libraries(${PROJECT_NAME}
# 		${Boost_LIBRARIES}
# 		${PCL_IO_LIBRARIES}
# )

# ament_target_dependencies(${PROJECT_NAME}
#   "Boost"
#   "PCL"
#   "tf2_ros"
# )


# if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_SOURCE_DIR})

# endif(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_SOURCE_DIR})

# # Additional commands required for ROS 2 packages
# ament_export_dependencies(Boost PCL tf2_ros)
# ament_export_include_directories(include ${Boost_INCLUDE_DIRS} ${PCL_INCLUDE_DIRS})
# ament_export_libraries(${PROJECT_NAME} ${Boost_LIBRARIES} ${PCL_LIBRARIES})

cmake_minimum_required(VERSION 3.8)
project(PandarGeneral)

# Find packages
find_package(ament_cmake REQUIRED)
find_package(Boost REQUIRED)
find_package(PCL REQUIRED COMPONENTS common io) # Assuming 'io' is needed; adjust as necessary
find_package(tf2_ros REQUIRED)

# Include directories
include_directories(
  include
  ${Boost_INCLUDE_DIRS}
  ${PCL_INCLUDE_DIRS}
  ${tf2_ros_INCLUDE_DIRS} # This line is usually not needed if ament_target_dependencies is used correctly

)

# Add library target
add_library(${PROJECT_NAME}
  src/input.cc
  src/pandarGeneral_internal.cc
  src/pandarGeneral.cc
  src/pcap_reader.cpp
)

# Specify C++ Standard
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

# Link libraries
target_link_libraries(${PROJECT_NAME}
  ${Boost_LIBRARIES}
  ${PCL_LIBRARIES} # Use PCL_LIBRARIES for linking all found PCL components
)

# Declare dependencies
ament_target_dependencies(${PROJECT_NAME}
  Boost
  PCL
  tf2_ros
)

# Export dependencies
ament_export_dependencies(Boost PCL tf2_ros)
ament_export_include_directories(include ${Boost_INCLUDE_DIRS} ${PCL_INCLUDE_DIRS})
ament_export_libraries(${PROJECT_NAME} ${Boost_LIBRARIES} ${PCL_LIBRARIES})

# Install rules, if necessary
# install(TARGETS ${PROJECT_NAME}
#   ARCHIVE DESTINATION lib
#   LIBRARY DESTINATION lib
#   RUNTIME DESTINATION bin
# )

ament_package()

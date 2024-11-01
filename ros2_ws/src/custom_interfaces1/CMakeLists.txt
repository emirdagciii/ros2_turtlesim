cmake_minimum_required(VERSION 3.8)
project(custom_interfaces1)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Declare ROS 2 interfaces
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/TargetCoordinates.msg"
  "msg/LedStateArray.msg"
  "msg/Turtle.msg"
  "msg/TurtleArray.msg"
  "srv/SetLed.srv"
  "srv/CatchTurtle.srv"


  DEPENDENCIES geometry_msgs
)

# Export dependencies
ament_export_dependencies(rosidl_default_runtime)
ament_package()

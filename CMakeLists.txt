cmake_minimum_required(VERSION 3.5)
project(ariadna_radio_tag)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)



rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Acc.msg"
  "msg/Anchor.msg"
  "msg/AnchorArray.msg"
  "msg/Tag.msg"
 )

# Install Python modules
ament_python_install_package(${PROJECT_NAME})
# Install Python executables
# install(PROGRAMS
#   scripts/decawave_driver.py
#   scripts/ariadna_map_tf_broadcaster.py
#   scripts/ariadna_radio_tag_tf_broadcaster.py
#   DESTINATION lib/${PROJECT_NAME}
# )

# install(DIRECTORY
#   launch
#   DESTINATION share/${PROJECT_NAME}
#   USE_SOURCE_PERMISSIONS
# )


install(PROGRAMS
  ${PROJECT_NAME}/decawave_driver.py
  ${PROJECT_NAME}/ariadna_radio_tag_tf_broadcaster.py
  ${PROJECT_NAME}/ariadna_map_tf_broadcaster.py
  DESTINATION lib/${PROJECT_NAME}
)

install(
  DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
  USE_SOURCE_PERMISSIONS
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

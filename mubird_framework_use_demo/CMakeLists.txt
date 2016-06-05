cmake_minimum_required(VERSION 2.8)

set(PROJECT_NAME "mubird_framework_use_demo")

project(${PROJECT_NAME})

find_package(mubird REQUIRED)

aux_source_directory(. SRCS)

add_executable(demo ${SRCS})
target_link_libraries(demo mubird -pthread)

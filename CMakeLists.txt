cmake_minimum_required(VERSION 2.8)

set(PROJECT_NAME "mubird")

project(${PROJECT_NAME})

set(THIRD_PARTY_SOURCE_DIR "${PROJECT_SOURCE_DIR}/third_party")
set(THIRD_PARTY_BINARY_DIR "${PROJECT_BINARY_DIR}/third_party")

add_subdirectory(third_party)

add_subdirectory(mubird)


export(TARGETS mubird FILE ${PROJECT_BINARY_DIR}/${PROJECT_NAME}-export.cmake)
configure_file(
    mubird-config.cmake.in
    ${PROJECT_BINARY_DIR}/${PROJECT_NAME}-config.cmake
    )
export(PACKAGE mubird)

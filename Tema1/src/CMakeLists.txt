cmake_minimum_required(VERSION 3.10)

project(Games VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(Game)

add_executable(exe main.cxx)

target_link_libraries(exe PUBLIC Game)

target_include_directories(exe PUBLIC
                                "${PROJECT_BINARY_DIR}"
                                "${PROJECT_SOURCE_DIR}/Game")

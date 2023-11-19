cmake_minimum_required(VERSION 3.10)

project(Games VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(Platform)
add_subdirectory(Console)
add_subdirectory(PC)
add_subdirectory(PS3)
add_subdirectory(PS4)

add_executable(exe main.cxx)

target_link_libraries(exe PUBLIC Platform Console PC PS3 PS4)

target_include_directories(exe PUBLIC
                                "${PROJECT_BINARY_DIR}"
                                "${PROJECT_SOURCE_DIR}/Platform"
                                "${PROJECT_SOURCE_DIR}/Console"
                                "${PROJECT_SOURCE_DIR}/PC"
                                "${PROJECT_SOURCE_DIR}/PS3"
                                "${PROJECT_SOURCE_DIR}/PS4")
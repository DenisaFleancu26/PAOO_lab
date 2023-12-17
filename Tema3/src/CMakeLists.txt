cmake_minimum_required(VERSION 3.10)

project(main VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(Student)
add_subdirectory(Teacher)
add_subdirectory(Semaphore)

add_executable(exe main.cxx)

target_link_libraries(exe PUBLIC Student)
target_link_libraries(exe PUBLIC Teacher)
target_link_libraries(exe PUBLIC Semaphore)

target_include_directories(exe PUBLIC "${PROJECT_SOURCE_DIR}")
target_include_directories(exe PUBLIC "${PROJECT_SOURCE_DIR}/Student")
target_include_directories(exe PUBLIC "${PROJECT_SOURCE_DIR}/Teacher")
target_include_directories(exe PUBLIC "${PROJECT_SOURCE_DIR}/Semaphore")
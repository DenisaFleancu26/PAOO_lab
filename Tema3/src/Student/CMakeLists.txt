add_library(Student STATIC Student.cxx)

target_include_directories(Student PUBLIC "${PROJECT_SOURCE_DIR}")
target_include_directories(Student PUBLIC "${PROJECT_SOURCE_DIR}/Teacher")
target_include_directories(Student PUBLIC "${PROJECT_SOURCE_DIR}/Semaphore")

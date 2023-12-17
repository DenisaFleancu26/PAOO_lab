add_library(Semaphore STATIC Semaphore.cxx)

target_include_directories(Semaphore PUBLIC "${PROJECT_SOURCE_DIR}/Teacher")
target_include_directories(Semaphore PUBLIC "${PROJECT_SOURCE_DIR}/Student")
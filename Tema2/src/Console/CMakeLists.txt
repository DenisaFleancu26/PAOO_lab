add_library(Console STATIC Console.cxx)

target_include_directories(Console PUBLIC "${PROJECT_SOURCE_DIR}/Platform")


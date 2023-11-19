add_library(PC STATIC PC.cxx)

target_include_directories(PC PUBLIC "${PROJECT_SOURCE_DIR}/Platform")
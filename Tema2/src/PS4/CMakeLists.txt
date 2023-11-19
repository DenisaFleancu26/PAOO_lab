add_library(PS4 STATIC PS4.cxx)

target_include_directories(PS4 PUBLIC "${PROJECT_SOURCE_DIR}/Console")
target_include_directories(PS4 PUBLIC "${PROJECT_SOURCE_DIR}/Platform")
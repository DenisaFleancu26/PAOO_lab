add_library(PS3 STATIC PS3.cxx)

target_include_directories(PS3 PUBLIC "${PROJECT_SOURCE_DIR}/Console")
target_include_directories(PS3 PUBLIC "${PROJECT_SOURCE_DIR}/Platform")
add_library(MathFunctions MathFunctions.cxx mysqrt.cxx)

option(USE_MYMATH "Use tutorial provide math implementation" ON)

if(USE_MATH)
    target_compile_definitions(MathFunctions PRIVATE "USE_MYMATH")
endif()

add_library(SqrtLibrary STATIC mysqrt.cxx)

target_link_libraries(MathFunctions PRIVATE SqrtLibrary)
add_library(
    source

    ABRO.h 
    ABRO.cpp 
)


# target_include_directories(source PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_include_directories(source PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}") # one dir above
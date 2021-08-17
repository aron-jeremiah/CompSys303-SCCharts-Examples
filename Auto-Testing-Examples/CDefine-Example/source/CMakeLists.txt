add_library(
    source

    SCChart.h 
    SCChart.cpp 
    timing.h

)


# target_include_directories(source PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_include_directories(source PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}") # one dir above
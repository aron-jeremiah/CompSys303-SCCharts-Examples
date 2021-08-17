add_executable(testTiming test.cpp)

target_link_libraries(testTiming PUBLIC
    gtest_main
    source
)

# include_directories(${PROJECT_SOURCE_DIR}/source/headders)

add_test(
    NAME testTiming
    COMMAND testTiming
)

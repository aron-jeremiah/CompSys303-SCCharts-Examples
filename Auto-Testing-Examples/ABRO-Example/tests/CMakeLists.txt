add_executable(testABRO test.cpp)

target_link_libraries(testABRO PUBLIC
    gtest_main
    source
)

# include_directories(${PROJECT_SOURCE_DIR}/source/headders)

add_test(
    NAME testABRO
    COMMAND testABRO
)
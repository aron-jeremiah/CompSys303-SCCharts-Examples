cmake_minimum_required(VERSION 3.10)
project(SCChartsAutoTester)

enable_testing()
add_subdirectory(googletest)
add_subdirectory(source)
add_subdirectory(tests)
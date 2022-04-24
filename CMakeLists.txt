cmake_minimum_required(VERSION 3.22)
project(gtest_bare)

set(CMAKE_CXX_STANDARD 17)

include_directories(lib)
add_subdirectory(lib)
add_subdirectory(tests)

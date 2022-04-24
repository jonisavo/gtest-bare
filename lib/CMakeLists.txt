cmake_minimum_required(VERSION 3.22)
project(gtest_bare_lib)

set(CMAKE_CXX_STANDARD 17)

add_executable(gtest_bare_lib main.cpp math_helpers.cpp)

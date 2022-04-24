cmake_minimum_required(VERSION 3.22)
project(gtest_bare_tests)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/e2239ee6043f73722e7aa812a459f54a28552929.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include_directories(../lib)
add_executable(gtest_bare_tests math_tests.cpp ../lib/math_helpers.cpp)
target_link_libraries(gtest_bare_tests gtest_main)

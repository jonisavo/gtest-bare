## gtest-bare

A barebones CMake project with Google Test configured.

Creates two executables, `gtest_bare_lib` and `gtest_bare_tests`.

This project uses CMake 3.22 and C++17, but those requirements can be lowered.
CMake 3.14 is required for `FetchContent_MakeAvailable`, which is used in the
test CMake configuration.
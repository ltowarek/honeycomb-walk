cmake_minimum_required(VERSION 3.4)
project(honeycomb_walk)
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(googletest)

add_executable(honeycomb_walk src/main.cpp src/honeycomb_walk.cpp)
target_include_directories(honeycomb_walk PUBLIC include)

add_executable(honeycomb_walk_test tests/test.cpp src/honeycomb_walk.cpp)
target_include_directories(honeycomb_walk_test PUBLIC googletest/googletest/include include)
target_link_libraries(honeycomb_walk_test gtest gtest_main)

enable_testing()
add_test(NAME honeycomb_walk_test COMMAND honeycomb_walk_test)

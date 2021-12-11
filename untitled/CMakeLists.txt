cmake_minimum_required(VERSION 3.20)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp)
add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
target_link_libraries(GoogleTestDemo gtest)


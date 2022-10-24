cmake_minimum_required(VERSION 3.5)
project(travelling-salesman)

set(CMAKE_CXX_STANDARD)

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(lib/googletest)
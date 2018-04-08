cmake_minimum_required(VERSION 3.8)
project(cardReader)
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)


enable_testing()

add_subdirectory(src)
add_subdirectory(test)
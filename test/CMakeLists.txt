cmake_minimum_required(VERSION 3.8)
project(cardReader_tester)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES test.cpp)
add_executable(cardReader_tester ${SOURCE_FILES})
target_link_libraries(cardReader_tester cardReader_src gtest gtest_main)

add_test(NAME Test COMMAND cardReader_tester)
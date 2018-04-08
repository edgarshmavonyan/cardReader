cmake_minimum_required(VERSION 3.8)
project(cardReader_src)
set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES passportReader.cc mirCardReader.cc visaCardReader.cc)
include_directories(${cardReader_SOURCE_DIR}/include)

add_library(cardReader_src STATIC ${SOURCE_FILES})
cmake_minimum_required(VERSION 3.8)
project(cardReader)
set(CMAKE_CXX_STANDARD 14)

OPTION(BUILD_TESTS "Build tests." OFF)
OPTION(RELEASE "Build release version." OFF)

if(RELEASE)
    set(CMAKE_BUILD_TYPE Release)
else(RELEASE)
    set(CMAKE_BUILD_TYPE Debug)
endif(RELEASE)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(include)

find_package(Doxygen)
if (DOXYGEN_FOUND)
    set(DOXYGEN_IN docs/Doxyfile)
    set(DOXYGEN_OUT docs/DoxygenOutput)
    configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)
    message("Building doxygen files...")
    add_custom_target(doc_doxygen ALL
            COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
            WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
            COMMENT "Generating documentation..."
            VERBATIM)
else()
    message("Please install doxygen to build the documentation of api.")
endif(DOXYGEN_FOUND)

add_subdirectory(src)
if (BUILD_TESTS)
    message("Building with tests...")
    enable_testing()
    add_subdirectory(test)
endif(BUILD_TESTS)
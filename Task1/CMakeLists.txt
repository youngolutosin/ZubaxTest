cmake_minimum_required(VERSION 3.0)

set (CMAKE-CXX_FLGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wextra -pedantic -std=c++17")
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(executeTests modular_test.cpp)
target_link_libraries(executeTests ${GTEST_LIBRARIES} pthread)



# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)

project(ExampleProject)

set(CMAKE_CXX_STANDARD 11)

add_executable(example src/main.cpp)

# Add gtest
enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(runTests tests/test_example.cpp)

target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)

add_test(NAME example_test COMMAND runTests)

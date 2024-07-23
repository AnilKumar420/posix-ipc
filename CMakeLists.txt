# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)

project(CalculatorProject)

set(CMAKE_CXX_STANDARD 11)

add_executable(calculator src/main.cpp src/calculator.cpp)

# Add gtest
enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(runCalculatorTests tests/test_calculator.cpp src/calculator.cpp)

target_link_libraries(runCalculatorTests ${GTEST_LIBRARIES} pthread)

add_test(NAME calculator_test COMMAND runCalculatorTests)

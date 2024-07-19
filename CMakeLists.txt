cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(HelloWorld VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(HelloWorld src/main.cpp)

# Generate compilation database
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Find clang-tidy
find_program(CLANG_TIDY_EXE NAMES clang-tidy)

if(CLANG_TIDY_EXE)
  set(CMAKE_CXX_CLANG_TIDY "${CLANG_TIDY_EXE}")

  add_custom_target(tidy
    COMMAND ${CLANG_TIDY_EXE} -p ${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/src
    COMMENT "Running clang-tidy..."
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
  )
endif()

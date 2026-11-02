cmake_minimum_required(VERSION 3.15)
project(cpoker CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find all .cpp files in src/ and subfolders
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "src/*.cpp")

# Create executable
add_executable(cpoker ${SOURCES})

# Include headers from include/
target_include_directories(cpoker PRIVATE include)

# Useful compiler warnings
target_compile_options(cpoker PRIVATE -Wall -Wextra -Wpedantic)
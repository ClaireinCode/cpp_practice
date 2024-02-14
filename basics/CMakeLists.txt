cmake_minimum_required(VERSION 3.10) # Specify the minimum version of CMake required

# Set the project name and version
project(MyProject VERSION 1.0)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executable target with source files
add_executable(MyExecutable main.cpp)

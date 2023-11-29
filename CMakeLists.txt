cmake_minimum_required(VERSION 3.20) # Minimum version of CMake

project(MyProject) # Name your project

# Set C++ standard, e.g., C++17
set(CMAKE_CXX_STANDARD 17)

# Create an executable from all .cpp files in the current directory
file(GLOB SOURCES "src/*.cpp")

add_executable(MyExecutable ${SOURCES}) 
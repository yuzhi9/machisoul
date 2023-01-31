cmake_minimum_required(VERSION 3.22)
project(Arrays)

set(CMAKE_CXX_STANDARD 14)
include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(Arrays main.cpp src/Arrays.cpp)

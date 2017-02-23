cmake_minimum_required(VERSION 3.6)
project(Assignment2_Templates)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp IntWrapper.cpp IntWrapper.h IsLessThan.cpp IsLessThan.h StringWrapper.cpp StringWrapper.h)
add_executable(Assignment2_Templates ${SOURCE_FILES})
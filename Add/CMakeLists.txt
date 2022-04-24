cmake_minimum_required(VERSION 3.20)
project(Calculator)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
include_directories(include)
#enable testing for gtest 
enable_testing()
add_library(Calculator STATIC 
            src/calculator.cpp
            )
add_subdirectory(unit)

cmake_minimum_required(VERSION 3.10)
project(c3pm_test_libmath)

set(CMAKE_CXX_STANDARD 11)

include_directories(exports)

add_executable(c3pm_test_libmath
        src/exports/libmath.cpp
        src/exports/libmath.h
        src/unittest_main.cpp)

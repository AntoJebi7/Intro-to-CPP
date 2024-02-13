cmake_minimum_required(VERSION 3.27)
project(cpp_codes)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_codes main.cpp
        cppsamples.cpp
        cmake-build-debug/cppdtypes.cpp
        cppenum.cpp
        cppstructure.cpp
        cppcontrolflow.cpp
        cpploops.cpp
        cpppaterns.cpp
        cpppyramid.cpp
        "pyramid using 2 for loops.cpp"
        "right to left half pyramid.cpp"
        "inverted pyramid.cpp"
        "mirror image pattern.cpp"
        "diamond pattern.cpp"
        "up arrow pattern.cpp"
        cppoops.cpp
        inheritance.cpp)

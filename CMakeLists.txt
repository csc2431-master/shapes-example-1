cmake_minimum_required(VERSION 3.10)
project(shapes_example_1)

set(CMAKE_CXX_STANDARD 14)

add_executable(shapes_example_1 main.cpp point.h point.cpp shape.cpp shape.h ellipse.cpp ellipse.h)
cmake_minimum_required(VERSION 3.17)
project(C_plus_plus_concepts)

set(CMAKE_CXX_STANDARD 14)

add_executable(C_plus_plus_concepts
        templated_variables_function.cpp inheritance.cpp uiuc/Shape.cpp uiuc/HSLAPixel.cpp uiuc/Cube.cpp)

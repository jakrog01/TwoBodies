cmake_minimum_required(VERSION 3.30)
project(TwoBodies)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)
add_executable(TwoBodies src/main.cpp
        src/Body.cpp
        src/vector2D.cpp
        include/Constants.hpp
        src/algorithmBase.cpp
        include/algorithms/algorithmBase.hpp
        src/eulerAlgorithm.cpp
        include/algorithms/eulerAlgorithm.hpp)

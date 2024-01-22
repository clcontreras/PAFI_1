cmake_minimum_required(VERSION 3.27)
project(PAFI_1)

include_directories(src)

set(CMAKE_CXX_STANDARD 17)

add_executable(PAFI_1 main.cpp
        src/factorial.cpp
        src/factorial.h
        src/producto.cpp
        src/producto.h)

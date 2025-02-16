cmake_minimum_required(VERSION 3.28)
project(RayTracing)

set(CMAKE_CXX_STANDARD 26)

add_executable(RayTracing main.cpp
        vec3.cpp
        color.cpp
        color.h
        vec3.h
        ray.cpp
        ray.h)

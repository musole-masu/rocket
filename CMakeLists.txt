cmake_minimum_required(VERSION 3.30)
project(RocketEngine)

set(CMAKE_CXX_STANDARD 14)

add_executable(RocketEngine main.cpp
        rocket.h
        rocket.cpp)

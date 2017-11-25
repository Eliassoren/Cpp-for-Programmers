cmake_minimum_required(VERSION 2.8)

project(eksLeksjon8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra -Wno-unused-parameter")

add_executable(sorter sorter.cpp)

add_executable(soek soek.cpp)

add_executable(skriv skriv.cpp)

add_executable(punkt punkt.cpp)

cmake_minimum_required(VERSION 2.8)

project(gtkmm_example)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra -Wno-unused-parameter")

INCLUDE(FindPkgConfig)

pkg_check_modules(GTKMM gtkmm-3.0 REQUIRED)
include_directories(${GTKMM_INCLUDE_DIRS})
link_directories(${GTKMM_LIBRARY_DIRS})

add_executable(gtkmm_example main.cpp)
target_link_libraries(gtkmm_example ${GTKMM_LIBRARIES})

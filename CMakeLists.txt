cmake_minimum_required(VERSION 3.10)

project(Sortuass)
find_package(Boost REQUIRED COMPONENTS filesystem REQUIRED)

add_executable(Sort src/main.cpp)

target_link_libraries (Sort ${Boost_LIBRARIES})
message(STATUS "Boost_LIBRARIES={${Boost_LIBRARIES}}")
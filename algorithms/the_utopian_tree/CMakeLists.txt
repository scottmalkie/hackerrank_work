cmake_minimum_required(VERSION 3.4)
project(the_utopian_tree)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")

set(SOURCE_FILES main.c)
add_executable(the_utopian_tree ${SOURCE_FILES})
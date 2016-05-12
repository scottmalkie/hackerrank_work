cmake_minimum_required(VERSION 3.4)
project(find_digits)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")

set(SOURCE_FILES main.c)
add_executable(find_digits ${SOURCE_FILES})
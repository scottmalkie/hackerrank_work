cmake_minimum_required(VERSION 3.4)
project(sherlock_and_the_beast)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")

set(SOURCE_FILES main.c)
add_executable(sherlock_and_the_beast ${SOURCE_FILES})
cmake_minimum_required(VERSION 3.25)
project(WorkInPairs C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(WorkInPairs
        main.c
        queue.h "out/build/queue.c")

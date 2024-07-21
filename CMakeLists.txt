cmake_minimum_required(VERSION 3.28)
project(PriorityQueue C)

set(CMAKE_C_STANDARD 17)

add_executable(PriorityQueue main.c
        PriorityQueue.c
        PriorityQueue.h)
add_library(LibPriorityQueue PriorityQueue.c PriorityQueue.h
        ArrayList.h
        ArrayList.c)

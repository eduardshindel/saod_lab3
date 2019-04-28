cmake_minimum_required(VERSION 3.14)
project(PraiseTheLord C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(PraiseTheLord
        dijkstra.c
        dijkstra.h
        graph.c
        graph.h
        heap.c
        heap.h
        main.c)

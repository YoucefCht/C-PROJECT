cmake_minimum_required(VERSION 3.27)
project(C_PROJECT C)

set(CMAKE_C_STANDARD 11)

include_directories(D1)
include_directories(D2)
include_directories(D3)

add_executable(C_PROJECT
        D1/column.c
        D1/column.h
        D2/cdataframe.c
        D2/cdataframe.h
        D3/list.c
        D3/list.h
        main.c)

cmake_minimum_required(VERSION 3.24)
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_ASM_FLAGS "-x assembler-with-cpp")

project(conway)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(conway
        cell.h
        grid.h
        life.h
        main.cpp
        cell.cpp
        grid.cpp)

cmake_minimum_required(VERSION 3.6)
project(PUISSANCE_4)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c connect_four.h connect_four.c computer.c check.c render_ncurses.c)
add_executable(PUISSANCE_4 ${SOURCE_FILES})
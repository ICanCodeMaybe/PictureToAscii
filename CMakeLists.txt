cmake_minimum_required(VERSION 3.18.1)
project(pic_ascii)

set(ASCII_CPP src/main.cpp src/pngAscii.cpp)
set(ASCII_INCLUDE_DIR src/)


add_executable(${PROJECT_NAME} ${ASCII_CPP})


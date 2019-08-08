cmake_minimum_required(VERSION 3.14)
project(bot)

set(CMAKE_CXX_STANDARD 17)

add_executable(bot main.cpp cmake-build-debug/algoritm.cpp cmake-build-debug/algoritm.h cmake-build-debug/includes.h)
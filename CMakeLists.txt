cmake_minimum_required(VERSION 3.7)
project(WorldGen)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp World.cpp World.h Tiles.cpp Tiles.h)
add_executable(WorldGen ${SOURCE_FILES})
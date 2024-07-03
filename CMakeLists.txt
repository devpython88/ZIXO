cmake_minimum_required(VERSION 3.5)
project(Game)

find_package(raylib 4.5.0 REQUIRED)

add_executable(game main.cpp)
target_link_libraries(game raylib zixo)
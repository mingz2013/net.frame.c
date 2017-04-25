cmake_minimum_required(VERSION 3.7)
project(server_base_c)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        src/)

include_directories(src)

add_executable(server_base_c ${SOURCE_FILES})
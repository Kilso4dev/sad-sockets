CMake_minimum_required(VERSION 3.1)

project(sad-sockets C)


# All Files for this module


file(GLOB FILES_ALL
    "./src/*.h"
    "./src/*.c")


set(CMAKE_C_STANDARD 99)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -lm -g")


add_executable(sad_main ${FILES_ALL})
target_link_libraries(sad_main m)

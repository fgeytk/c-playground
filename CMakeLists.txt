cmake_minimum_required(VERSION 3.29)
project(manette C)

set(CMAKE_C_STANDARD 11)

add_executable(manette main.c)
target_link_libraries(manette PRIVATE xinput)


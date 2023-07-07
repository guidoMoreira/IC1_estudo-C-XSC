cmake_minimum_required(VERSION 3.14)
project(matrizes)

set(CMAKE_CXX_STANDARD 14)

add_executable(matrizes main.cpp)
include_directories("/home/usuario/cxsc/include")
target_link_libraries(matrizes "/home/usuario/cxsc/lib/libcxsc.so")
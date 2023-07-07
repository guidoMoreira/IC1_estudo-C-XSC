cmake_minimum_required(VERSION 3.14)
project(gausseidel2)

set(CMAKE_CXX_STANDARD 14)

add_executable(gausseidel2 main.cpp)

include_directories("/home/usuario/cxsc/include")
target_link_libraries(gausseidel2 "/home/usuario/cxsc/lib/libcxsc.so")
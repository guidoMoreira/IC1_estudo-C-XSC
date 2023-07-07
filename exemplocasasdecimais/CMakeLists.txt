cmake_minimum_required(VERSION 3.14)
project(exemplocasasdecimais)

set(CMAKE_CXX_STANDARD 14)

add_executable(exemplocasasdecimais main.cpp)
include_directories("/home/usuario/cxsc/include")
target_link_libraries(exemplocasasdecimais "/home/usuario/cxsc/lib/libcxsc.so")
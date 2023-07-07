cmake_minimum_required(VERSION 3.14)
project(gaus_seidel)

set(CMAKE_CXX_STANDARD 14)

add_executable(gaus_seidel main.cpp)

include_directories("/home/usuario/cxsc/include")
target_link_libraries(gaus_seidel "/home/usuario/cxsc/lib/libcxsc.so")
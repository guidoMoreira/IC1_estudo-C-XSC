cmake_minimum_required(VERSION 3.14)
project(gaussjacobixsc)

set(CMAKE_CXX_STANDARD 14)

add_executable(gaussjacobixsc main.cpp)
include_directories("/home/usuario/cxsc/include")
target_link_libraries(gaussjacobixsc "/home/usuario/cxsc/lib/libcxsc.so")
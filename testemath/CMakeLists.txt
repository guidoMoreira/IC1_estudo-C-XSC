cmake_minimum_required(VERSION 3.14)
project(testemath)

set(CMAKE_CXX_STANDARD 14)

add_executable(testemath main.cpp)

include_directories("/home/usuario/cxsc/include")
target_link_libraries(testemath "/home/usuario/cxsc/lib/libcxsc.so")
cmake_minimum_required(VERSION 3.15.0)
project(purecpp VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)

include_directories(../cinatra/include)

add_executable(purecpp feather.cpp)

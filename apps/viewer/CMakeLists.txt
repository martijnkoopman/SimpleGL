cmake_minimum_required(VERSION 3.5)

project(viewer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(viewer main.cpp)

target_link_libraries(viewer simplegl)

install(TARGETS viewer)

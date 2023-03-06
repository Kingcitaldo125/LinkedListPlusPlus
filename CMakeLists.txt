cmake_minimum_required(VERSION 3.16)

project(llist_plus_plus LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src/)

add_executable(out main.cpp)

target_link_libraries(out PRIVATE llist_plus_plus)

target_include_directories(out PRIVATE ${CMAKE_SOURCE_DIR}/include)

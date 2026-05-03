cmake_minimum_required(VERSION 3.10)
set(CMAKE_BUILD_TYPE Debug)
project(main)

aux_source_directory(. src)
include_directories(./include)
add_subdirectory(lib)

add_executable(main ${src})
target_link_libraries(main sushu)

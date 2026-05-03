cmake_minimum_required(VERSION 3.10)

set(CMAKE_BUILD_TYPE Debug)

project(main)

aux_source_directory(. dir_srcs)
include_directories(./src)
add_subdirectory(src ${CMAKE_CURRENT_BINARY_DIR}/lib_build)
# add_librarydirectory()

add_executable(main ${dir_srcs})
target_link_libraries(main myfunction)




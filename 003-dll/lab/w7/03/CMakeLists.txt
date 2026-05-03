cmake_minimum_required(VERSION 3.10)

aux_source_directory(. srcs_main)
add_subdirectory(lib)
include_directories(lib)

add_executable(main ${srcs_main})
target_link_libraries(main mymath)

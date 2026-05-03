cmake_minimum_required(VERSION 3.10)
set(CMAKE_BUILD_TYPE Debug)
project(main)

aux_source_directory(./lib SRCS_lib)
aux_source_directory(. SRCS)
include_directories(./head ../MyLib)
find_library(lib_f f PATHS "../MyLib/build")
find_library(printhello printhello PATHS "../MyLib/build")


add_executable(main ${SRCS} ${SRCS_lib})
target_link_libraries(main ${lib_f} ${printhello})
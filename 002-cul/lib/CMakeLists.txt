cmake_minimum_required(VERSION 3.10)
aux_source_directory(. srcs)
include_directories(../include)
add_library(sushu STATIC ${srcs})
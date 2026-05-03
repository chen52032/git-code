cmake_minimum_required(VERSION 3.10)

aux_source_directory(. srcs)

add_library(mymath SHARED ${srcs})
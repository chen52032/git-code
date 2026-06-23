cmake_minimum_required(VERSION 4.2.3)
add_executable(evenodd)
target_sources(evenodd
    PRIVATE
    evenodd.cpp
)
install(TARGETS evenodd)
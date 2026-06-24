cmake_minimum_required(VERSION 4.2.3)
project(template_class)

add_executable(part)
target_sources(part
    PRIVATE
        part.cpp
)

install(TARGETS part)
cmake_minimum_required(VERSION 4.2.3)
project(template_class)

add_executable(part)
target_sources(part
    PRIVATE
        part.cpp
)

install(TARGETS part
    DESTINATION 009-class_template
)

add_subdirectory(lab_1)
add_subdirectory(lab_2)
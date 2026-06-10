cmake_minimum_required(VERSION 4.2.3)
project(derived_class)

option(LAB_1 "build lab 1" ON)

option(TEST_FILES "build test files" OFF)
if(TEST_FILES)
    # test
    add_executable(test)
    target_sources(test
    PRIVATE
        test.cpp
    )
    add_custom_command(
        TARGET test
        POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
                $<TARGET_FILE:test>
                ${CMAKE_SOURCE_DIR}/../.vscode/debug/
        VERBATIM
    )
    # virtual
    add_executable(virtual)
    target_sources(virtual
    PRIVATE
    virtual.cpp
    )
    add_custom_command(
        TARGET virtual
        POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
                $<TARGET_FILE:virtual>
                ${CMAKE_SOURCE_DIR}/../.vscode/debug/
        VERBATIM
    )
    add_custom_target(copy
    COMMAND ${CMAKE_COMMAND} -E copy
            $<TARGET_FILE:test>
            ${CMAKE_SOURCE_DIR}/../.vscode/debug/
    COMMAND ${CMAKE_COMMAND} -E copy
            $<TARGET_FILE:virtual>
            ${CMAKE_SOURCE_DIR}/../.vscode/debug/
    DEPENDS virtual
    VERBATIM
    )
endif()

add_subdirectory(lab_1)
add_subdirectory(lab_2)
add_subdirectory(lab_3)
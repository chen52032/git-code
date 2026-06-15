add_executable(container container.cpp)
add_custom_command(
    TARGET container POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
            $<TARGET_FILE:container>
            ${CMAKE_SOURCE_DIR}/../.vscode/debug
    VERBATIM
)

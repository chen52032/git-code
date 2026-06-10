add_executable(Polygon_print)
target_sources(Polygon_print
    PRIVATE
        Polygon_print.cpp
)
add_custom_command(
    TARGET Polygon_print POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
            $<TARGET_FILE:Polygon_print>
            ${CMAKE_SOURCE_DIR}/../.vscode/debug/
    VERBATIM
)
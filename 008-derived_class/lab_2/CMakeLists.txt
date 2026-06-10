add_executable(polygon)
target_sources(polygon
    PRIVATE
    main.cpp
)
add_custom_command(
    TARGET polygon POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
            $<TARGET_FILE:polygon>
            ${CMAKE_SOURCE_DIR}/../.vscode/debug/
    VERBATIM
)

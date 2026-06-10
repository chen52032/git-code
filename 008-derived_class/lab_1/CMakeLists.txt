if(LAB_1)
    add_executable(inherited)
    target_sources(inherited
        PRIVATE
            inherited.cpp
    )
    add_custom_command(
        TARGET inherited
        POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
                $<TARGET_FILE:inherited>
                ${CMAKE_SOURCE_DIR}/../.vscode/debug/
        VERBATIM
    )
endif()
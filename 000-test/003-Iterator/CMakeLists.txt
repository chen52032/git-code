add_executable(container container.cpp)
add_custom_command(
    TARGET container POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
            $<TARGET_FILE:container>
            ${CMAKE_SOURCE_DIR}/../.vscode/debug
    VERBATIM
)

add_executable(TestWriteContainer)
target_sources(TestWriteContainer
    PRIVATE
    TestWriteContainer.cpp
)
target_link_libraries(TestWriteContainer
    PRIVATE
    WriteContainer
)
install(
    TARGETS
    TestWriteContainer
)

add_subdirectory(exercise_3.1)
add_subdirectory(exercise_3.2)
add_subdirectory(exercise_3.3)
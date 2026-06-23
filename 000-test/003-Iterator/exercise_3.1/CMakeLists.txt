add_executable(excludeFile)
target_sources(excludeFile
    PRIVATE
        excludeFile.cpp
)
install(
    TARGETS excludeFile
)
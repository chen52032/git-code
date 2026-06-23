add_executable(NumSortFile)
target_sources(NumSortFile
    PRIVATE
        NumSortFile.cpp
)

add_library(WriteContainer INTERFACE)
target_sources(WriteContainer
    INTERFACE
        FILE_SET HEADERS
            FILES
                WriteContainer.hpp
)
install(
    TARGETS NumSortFile
    )

target_link_libraries(NumSortFile
    PRIVATE
        WriteContainer
)
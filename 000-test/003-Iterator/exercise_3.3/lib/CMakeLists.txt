add_library(ReadMap)
target_sources(ReadMap
    PRIVATE
        ReadMap.cpp
        DisplayMap.cpp
    INTERFACE
        FILE_SET HEADERS
        FILES ReadMap.hpp
)

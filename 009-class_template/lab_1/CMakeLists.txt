add_executable(distance)
target_sources(distance
    PRIVATE
        Distance.cpp
)
target_link_libraries(distance
    PRIVATE PointLine
)

add_library(PointLine)
target_sources(PointLine
    PRIVATE
        PointLine.cpp
    PUBLIC
        FILE_SET HEADERS
        FILES class.hpp
)
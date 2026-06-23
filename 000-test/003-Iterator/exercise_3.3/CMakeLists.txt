add_subdirectory(lib)

add_executable(mapfamily)
target_sources(mapfamily
    PRIVATE
        mapfamily.cpp
)
target_link_libraries(mapfamily
    PRIVATE
        ReadMap
)
install(TARGETS mapfamily)
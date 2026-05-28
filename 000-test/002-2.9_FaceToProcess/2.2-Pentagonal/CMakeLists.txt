add_executable(main)
target_sources(main
    PRIVATE
        main.cpp
    PUBLIC
        FILE_SET HEADERS
        TYPE HEADERS
        BASE_DIRS include
        FILES include/head.hpp
)
add_subdirectory(lib)

target_link_libraries(main
    PUBLIC
        Pentagonal
        print_vector
)
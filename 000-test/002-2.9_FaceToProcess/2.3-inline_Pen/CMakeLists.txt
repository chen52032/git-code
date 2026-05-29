add_executable(main2)
target_sources(main2
    PRIVATE
        main.cpp
    PUBLIC FILE_SET HEADERS
        TYPE HEADERS
        BASE_DIRS .
        FILES in.hpp
)

add_library(Pentagonal2)
target_sources(Pentagonal2
    PRIVATE
        Pentagonal.cpp
    PUBLIC FILE_SET HEADERS
        TYPE HEADERS
        BASE_DIRS .
        FILES in.hpp
)

target_link_libraries(main2
    PUBLIC
        Pentagonal2
        Print_vector
)
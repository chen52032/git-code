add_library(Pentagonal)
target_sources(Pentagonal
    PRIVATE
        Pentagonal.cpp
    # PUBLIC
    #     FILE SET HEADERS
    #     TYPE HEADERS
    #     BASE_DIRS .
    #     FILE
)

add_library(Print_vector)
target_sources(Print_vector
    PRIVATE
        Print_vector.cpp
)
project ( hellolib )

message ( STATUS "CMAKE_CURRENT_SOURCE_DIR = ${CMAKE_CURRENT_SOURCE_DIR}." )

set( LIB_SRC
    hello.cpp
)

add_library( hello STATIC 
    ${LIB_SRC}
)
cmake_minimum_required(VERSION 3.20)

project(testprj)

set( LIB_SRC
    codes/hello.cpp
)

set( MAIN_SRC
    codes/main.cpp
)

add_library( hello STATIC 
    ${LIB_SRC}
)

add_executable( ${PROJECT_NAME} ${MAIN_SRC} )
target_link_libraries( ${PROJECT_NAME} hello )

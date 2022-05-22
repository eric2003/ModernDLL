cmake_minimum_required(VERSION 3.20)

project ( testprj )

set ( PRJ_INCLUDE_DIRS )

message ( STATUS "CMAKE_CURRENT_SOURCE_DIR = ${CMAKE_CURRENT_SOURCE_DIR}." )
set ( LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/hellolib )
message ( STATUS "LIB_DIR = ${LIB_DIR}" )

list ( APPEND PRJ_INCLUDE_DIRS ${LIB_DIR} )

set( LIB_SRC
    ${LIB_DIR}/hello.cpp
)

set( MAIN_SRC
    proj/main.cpp
)

add_library( hello STATIC 
    ${LIB_SRC}
)

add_executable( ${PROJECT_NAME} ${MAIN_SRC} )
target_include_directories ( ${PROJECT_NAME}
    PRIVATE 
        ${PRJ_INCLUDE_DIRS}
)
target_link_libraries( ${PROJECT_NAME} hello )

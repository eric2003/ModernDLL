project ( myexe )

message ( STATUS "PROJECT_NAME = ${PROJECT_NAME}" )
message ( STATUS "CMAKE_CURRENT_SOURCE_DIR = ${CMAKE_CURRENT_SOURCE_DIR}." )
message ( STATUS "PRJ_INCLUDE_DIRS = ${PRJ_INCLUDE_DIRS}." )

add_executable( proj1 proj1.cpp )

target_include_directories ( proj1
    PRIVATE 
        ${PRJ_INCLUDE_DIRS}
)

target_link_libraries( proj1 hello )

add_executable( proj2 proj2.cpp )

target_include_directories ( proj2
    PRIVATE 
        ${PRJ_INCLUDE_DIRS}
)

target_link_libraries( proj2 hello )

add_executable( proj3 proj3.cpp )

target_include_directories ( proj3
    PRIVATE 
        ${PRJ_INCLUDE_DIRS}
)

target_link_libraries( proj3 hello )
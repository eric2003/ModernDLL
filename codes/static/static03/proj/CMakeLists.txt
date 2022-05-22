project ( myexe )

message ( STATUS "PROJECT_NAME = ${PROJECT_NAME}" )
message ( STATUS "CMAKE_CURRENT_SOURCE_DIR = ${CMAKE_CURRENT_SOURCE_DIR}." )
message ( STATUS "PRJ_INCLUDE_DIRS = ${PRJ_INCLUDE_DIRS}." )


add_executable( main1 main.cpp )

target_include_directories ( main1
    PRIVATE 
        ${PRJ_INCLUDE_DIRS}
)

target_link_libraries( main1 hello )
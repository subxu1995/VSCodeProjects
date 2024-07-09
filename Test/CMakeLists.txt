cmake_minimum_required(VERSION 3.22)

project(Test)

message("\n #### Test VSCode#### \n")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE "Debug")

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories (include)

aux_source_directory (src SRC_LIST)

add_executable (main ${SRC_LIST})
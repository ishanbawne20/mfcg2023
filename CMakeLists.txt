cmake_minimum_required(VERSION 3.10)

project(assn1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_executable(assn1 main.cpp)

target_include_directories( assn1 PUBLIC
    "${PROJECT_SOURCE_DIR}/includes/"
    "${PROJECT_SOURCE_DIR}/includes/Math"
)
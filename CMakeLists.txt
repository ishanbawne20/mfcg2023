cmake_minimum_required(VERSION 3.10)

set( CMAKE_CXX_COMPILER "/pathto/g++" )
set( CMAKE_C_COMPILER "/pathto/gcc" )


project(mfcg)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_executable(mfcg main.cpp)

target_include_directories( mfcg PUBLIC
    "${PROJECT_SOURCE_DIR}/includes/"
    "${PROJECT_SOURCE_DIR}/includes/Math"
)

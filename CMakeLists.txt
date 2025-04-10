cmake_minimum_required(VERSION 4.0)

project(MiX_ConsoleUtils VERSION 4 DESCRIPTION "Simple Library to Console jokes")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES 
src/MiX_ConsoleUtils.cpp
)
set(INCLUDES 
include/MiX_ConsoleUtils.hpp 
include/MiX_ConsoleUtils_Enums.hpp)

add_library(MiX_ConsoleUtils STATIC ${SOURCES})
add_library(MiX::ConsoleUtils ALIAS MiX_ConsoleUtils)

target_include_directories(MiX_ConsoleUtils PUBLIC include)
target_include_directories(MiX_ConsoleUtils PRIVATE src)

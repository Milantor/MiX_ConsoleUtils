cmake_minimum_required(VERSION 3.28)

project(MiX_ConsoleUtils VERSION 1 DESCRIPTION "Simple Library to Console jokes")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES 
src/main.cpp
src/MiX_ConsoleUtils.cpp
)
set(INCLUDES 
include/MiX_ConsoleUtils.hpp 
include/MiX_ConsoleUtils_Enums.hpp)

add_library(MiX_ConsoleUtils STATIC ${SOURCES})

set_target_properties(MiX_ConsoleUtils PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(MiX_ConsoleUtils PROPERTIES PUBLIC_HEADER "${INCLUDES}")

target_include_directories(MiX_ConsoleUtils PRIVATE include)
target_include_directories(MiX_ConsoleUtils PRIVATE src)
cmake_minimum_required(VERSION 3.15...4.0)

project(MiX_ConsoleUtils
    VERSION 4
    DESCRIPTION "Simple Library to Console jokes"
    HOMEPAGE_URL "https://github.com/Milantor/MiX_ConsoleUtils"
    LANGUAGES CXX)

set(SRC
    src/MiX_ConsoleUtils.cpp)
set(PUB_HDRS
    include/MiX_ConsoleUtils.hpp
    include/MiX_ConsoleUtils_Enums.hpp)

option(BUILD_SHARED_LIBS "Build using shared libraries" OFF)

add_library(${PROJECT_NAME} ${SRC} ${PUB_HDRS})
add_library(MiX::ConsoleUtils ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC include)
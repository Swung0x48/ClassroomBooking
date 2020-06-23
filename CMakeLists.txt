cmake_minimum_required(VERSION 3.16)
project(LibraryManager)

set(CMAKE_CXX_STANDARD 20)

add_executable(LibraryManager main.cpp IMenu.cpp IMenu.h Menu/Menu0.cpp Menu/Menu0.h MenuRouter.cpp MenuRouter.h Vars.cpp Vars.h)
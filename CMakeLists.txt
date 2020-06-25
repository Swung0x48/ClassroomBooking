cmake_minimum_required(VERSION 3.16)
project(LibraryManager)

set(CMAKE_CXX_STANDARD 20)

add_executable(LibraryManager main.cpp Menu/IMenu.cpp Menu/IMenu.h Menu/Implemented/Menu0.cpp Menu/Implemented/Menu0.h Menu/MenuRouter.cpp Menu/MenuRouter.h Vars.cpp Vars.h Books/Book.cpp Books/Book.h Books/ScienceBook.cpp Books/ScienceBook.h Books/SocialBook.cpp Books/SocialBook.h Books/ForeignBook.cpp Books/ForeignBook.h Util/Util.cpp Util/Util.h "Library.h" "Library.cpp" "Menu/Implemented/Menu1.h" "Menu/Implemented/Menu1.cpp" User.h User.cpp Util/File.cpp Util/File.h "Util/Log.h" "Util/Log.cpp")
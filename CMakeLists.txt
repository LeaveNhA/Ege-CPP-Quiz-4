cmake_minimum_required(VERSION 3.17)
project(quiz4)

set(CMAKE_CXX_STANDARD 17)

add_executable(quiz4 main.cpp item.cpp item.h localItem.cpp localItem.h importedItem.cpp importedItem.h)
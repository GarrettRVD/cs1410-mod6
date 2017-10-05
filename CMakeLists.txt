cmake_minimum_required(VERSION 3.8)
project(mod6)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES arrays.cpp)
#set(SOURCE_FILES multiDarray.cpp)
#set(SOURCE_FILES funcArray.cpp)
#set(SOURCE_FILES structArray.cpp)
set(SOURCE_FILES arrayAsClassMember.cpp)
add_executable(mod6 ${SOURCE_FILES})
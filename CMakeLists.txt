cmake_minimum_required(VERSION 3.8)
project(project1_attempt_2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp LLIST.h LLIST.cpp Edge.h Edge.cpp SLGraph.h)
add_executable(project1_attempt_2 ${SOURCE_FILES})
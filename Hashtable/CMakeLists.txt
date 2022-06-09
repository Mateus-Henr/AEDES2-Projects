cmake_minimum_required(VERSION 3.22)
project(Hashtable C)

set(CMAKE_C_STANDARD 99)

add_executable(Hashtable main.c Hashtable.c Hashtable.h CrewMember.c CrewMember.h)

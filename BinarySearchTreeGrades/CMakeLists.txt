cmake_minimum_required(VERSION 3.22)
project(BinarySearchTreeGrades C)

set(CMAKE_C_STANDARD 99)

add_executable(BinarySearchTreeGrades main.c Tree.c TreeNode.c Files.c Student.h Files.h)

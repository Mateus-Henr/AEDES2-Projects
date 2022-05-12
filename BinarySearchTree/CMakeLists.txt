cmake_minimum_required(VERSION 3.20)
project(BinarySearchTree C)

set(CMAKE_C_STANDARD 99)

add_executable(BinarySearchTree main.c TreeNode.c TreeNode.h Tree.c Tree.h)

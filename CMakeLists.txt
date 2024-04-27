cmake_minimum_required(VERSION 3.27)
project(Stack)

set(CMAKE_CXX_STANDARD 17)

add_executable(Stack main.cpp
    Stack/Stack.h
    Stack/Stack.cpp
        Queue/DoublyLinkedList.cpp
        Queue/DoublyLinkedList.h
        Queue/Queue.cpp
        Queue/Queue.h)

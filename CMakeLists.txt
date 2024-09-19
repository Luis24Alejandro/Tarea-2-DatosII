cmake_minimum_required(VERSION 3.29)
project(Tarea__2_DatosII_)

set(CMAKE_CXX_STANDARD 20)

add_executable(Tarea__2_DatosII_ main.cpp
        "Sorting Algorithms/BubbleSort.cpp"
        "Sorting Algorithms/Headers/BubbleSort.h"
        "Sorting Algorithms/SelectionSort.cpp"
        "Sorting Algorithms/Headers/SelectionSort.h"
        "Sorting Algorithms/MergeSort.cpp"
        "Sorting Algorithms/Headers/MergeSort.h"
        "Data Structures/LinkedList/LinkedList.cpp"
        "Data Structures/LinkedList/LinkedList.h"
        "Data Structures/BinaryTree/BinaryTree.cpp"
        "Data Structures/BinaryTree/BinaryTree.h")

cmake_minimum_required(VERSION 3.29)
project(Tarea__2_DatosII_)

set(CMAKE_CXX_STANDARD 20)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)
pkg_check_modules(CAIRO REQUIRED cairo)

include_directories(${GTKMM_INCLUDE_DIRS} ${CAIRO_INCLUDE_DIRS})
link_directories(${GTKMM_LIBRARY_DIRS} ${CAIRO_LIBRARY_DIRS})
add_definitions(${GTKMM_CFLAGS_OTHER} ${CAIRO_CFLAGS_OTHER})


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
        "Data Structures/BinaryTree/BinaryTree.h"
        Graficos/GraphWidget.cpp
        Graficos/GraphWidget.h
        Time.cpp
        Time.h)


target_link_libraries(Tarea__2_DatosII_ ${GTKMM_LIBRARIES} ${CAIRO_LIBRARIES})

cmake_minimum_required(VERSION 3.30)
project(SimpleSortingAlgorithmBenchmark)

set(CMAKE_CXX_STANDARD 20)

add_executable(SimpleSortingAlgorithmBenchmark main.cpp
        Algorithms/MergeSort/mergesort.cpp
        Algorithms/MergeSort/mergesort.h
        Algorithms/algorithms.cpp
        Algorithms/algorithms.h
        Algorithms/InsertionSort/InsertionSort.cpp
        Algorithms/InsertionSort/InsertionSort.h
        Algorithms/BubbleSort/BubbleSort.cpp
        Algorithms/BubbleSort/BubbleSort.h
        Algorithms/SelectionSort/SelectionSort.cpp
        Algorithms/SelectionSort/SelectionSort.h
)

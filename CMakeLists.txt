cmake_minimum_required(VERSION 3.30)
project(SimpleSortingAlgorithmBenchmark)

set(CMAKE_CXX_STANDARD 20)

add_executable(SimpleSortingAlgorithmBenchmark main.cpp
        Algorithms/mergesort.cpp
        Algorithms/mergesort.h
        Algorithms/algorithms.cpp
        Algorithms/algorithms.h)

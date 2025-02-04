#include "algorithms.h"
#include <iostream>
#include <chrono>

#include "MergeSort/mergesort.h"
#include "InsertionSort/InsertionSort.h"

unsigned long MergeSortPerf(const int arr[], const int size, const int sortedArray[]) {
    int arrCopy[size];

    for (int i = 0; i < size; i++) {
        arrCopy[i] = arr[i];
    }

    const auto start = std::chrono::system_clock::now();

    mergeSort(arrCopy, 0, size - 1, size);

    const auto end = std::chrono::system_clock::now();

    for (int i = 0; i < size; ++i) {
        if (sortedArray[i] != arrCopy[i]) {
            std::cout << "Sorting Failed !!!" << std::endl;
            exit(1);
        }
    }

    const auto timeChrono = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    const unsigned long duration = timeChrono.count();
    std::cout << "Run time : " << duration << " milliseconds" << std::endl;
    std::cout << "Batch size : " << size << std::endl;
    std::cout << std::endl;

    return duration;
}

unsigned long InsertionSortPerf(const int arr[], int size, const int sortedArray[]) {
    int arrCopy[size];

    for (int i = 0; i < size; i++) {
        arrCopy[i] = arr[i];
    }

    const auto start = std::chrono::system_clock::now();

    InsertionSort(arrCopy, size);

    const auto end = std::chrono::system_clock::now();

    for (int i = 0; i < size; ++i) {
        if (sortedArray[i] != arrCopy[i]) {
            std::cout << "Sorting Failed !!!" << std::endl;
            exit(1);
        }
    }

    const auto timeChrono = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    const unsigned long duration = timeChrono.count();
    std::cout << "Run time : " << duration << " milliseconds" << std::endl;
    std::cout << "Batch size : " << size << std::endl;
    std::cout << std::endl;

    return duration;
}

#include "algorithms.h"
#include <iostream>
#include <chrono>

#include "MergeSort/mergesort.h"
#include "InsertionSort/InsertionSort.h"
#include "BubbleSort/BubbleSort.h"
#include "SelectionSort/SelectionSort.h"
#include "QuickSort/QuickSort.h"

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

    const auto timeChrono = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    const unsigned long duration = timeChrono.count();
    std::cout << "Run time : " << duration << " microseconds" << std::endl;

    return duration;
}

unsigned long InsertionSortPerf(const int arr[], const int size, const int sortedArray[]) {
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

    return duration;
}

unsigned long BubbleSortPerf(const int arr[], const int size, const int sortedArray[]) {
    int arrCopy[size];

    for (int i = 0; i < size; i++) {
        arrCopy[i] = arr[i];
    }

    const auto start = std::chrono::system_clock::now();

    BubbleSort(arrCopy, size);

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

    return duration;
}

unsigned long SelectionSortPerf(const int arr[], const int size, const int sortedArray[]) {
    int arrCopy[size];

    for (int i = 0; i < size; i++) {
        arrCopy[i] = arr[i];
    }

    const auto start = std::chrono::system_clock::now();

    SelectionSort(arrCopy, size);

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

    return duration;
}

unsigned long QuickSortPerf(const int arr[], const int size, const int sortedArray[]) {
    int arrCopy[size];

    for (int i = 0; i < size; i++) {
        arrCopy[i] = arr[i];
    }

    const auto start = std::chrono::system_clock::now();

    QuickSort(arrCopy, 0, size-1);

    const auto end = std::chrono::system_clock::now();
    std::cout << std::endl;

    for (int i = 0; i < size; ++i) {
        if (sortedArray[i] != arrCopy[i]) {
            std::cout << "Sorting Failed !!!" << std::endl;
            exit(1);
        }
    }

    const auto timeChrono = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    const unsigned long duration = timeChrono.count();
    std::cout << "Run time : " << duration << " microseconds" << std::endl;

    return duration;
}

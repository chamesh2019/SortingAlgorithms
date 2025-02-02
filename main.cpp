#include <iostream>
#include <random>
#include <chrono>
#include <bits/ranges_algo.h>

#include "Algorithms/mergesort.h"

float MergeSortPerf(const int arr[], const int size, const int sortedArray[]) {

    int arrCopy[size];

    for (int i = 0; i < size; i++) {
        arrCopy[i] = arr[i];
    }

    std::cout << "Running Merge Sort Algorithm Performance" << std::endl;
    std::cout << "Time Complexity : O(N log N)" << std::endl;
    std::cout << "Space Complexity : O(N)" << std::endl;

    const std::chrono::time_point start = std::chrono::system_clock::now();

    mergeSort(arrCopy,0,size-1, size);

    const std::chrono::time_point end = std::chrono::system_clock::now();

    for (int i = 0; i < size; ++i) {
        if (sortedArray[i] != arrCopy[i]) {
            std::cout << "Sorting Failed !!!";
            exit(1);
        }
    }

    std::cout << "Run time : " << std::chrono::duration_cast<std::chrono::microseconds>(end - start) << std::endl;
    std::cout << "Batch size : " << size << std::endl;

}


int main() {
    std::linear_congruential_engine<std::uint_fast32_t, 48271, 0, 2147483647> generator;
    std::uniform_int_distribution<int> distribution(0, 100);

    constexpr int size = 10000;
    int arr[size];
    int sortedArray[size];

    for (int i = 0; i < size; i++) {
        arr[i] = distribution(generator);
        sortedArray[i] = arr[i];
    }

    std::ranges::sort(sortedArray);

    MergeSortPerf(arr, size, sortedArray);

    for (const int & i : arr) {
        std::cout << i << " ";
    }


    delete[] arr;
    return 0;
}
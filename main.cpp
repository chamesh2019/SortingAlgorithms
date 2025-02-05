#include <iostream>
#include <random>
#include <algorithm>

#include "Algorithms/algorithms.h"

int main() {
    std::random_device rd;
    std::mt19937_64 generator(rd());
    std::uniform_int_distribution<int> distribution(0, 100);

    constexpr int size = 100000;
    int arr[size];
    int sortedArray[size];

    for (int i = 0; i < size; i++) {
        arr[i] = distribution(generator);
        sortedArray[i] = arr[i];
    }

    std::ranges::sort(sortedArray);

    // -----------------------------------------------------------------------------
    std::cout << "Running Merge Sort Algorithm Performance" << std::endl;
    std::cout << "Time Complexity : O(N log N)" << std::endl;
    std::cout << "Space Complexity : O(N)" << std::endl;

    double averageTime = 0;
    for (int i = 0; i < 10; i++) {
        averageTime += MergeSortPerf(arr, size, sortedArray) / 10.;
    }

    std::cout << "Average time for Merge Sort is " << averageTime << "ms for " << size << " Batch size. " << std::endl << std::endl;

    // -----------------------------------------------------------------------------
    std::cout << "Running Insertion Sort Algorithm Performance" << std::endl;
    std::cout << "Time Complexity (Best Case) : O(N)" << std::endl;
    std::cout << "Time Complexity (Worst Case) : O(N^2)" << std::endl;
    std::cout << "Space Complexity : O(1)" << std::endl;

    averageTime = 0;
    for (int i = 0; i < 10; i++) {
        averageTime += InsertionSortPerf(arr, size, sortedArray) / 10.;
    }

    std::cout << "Average time for Insertion Sort is " << averageTime << "ms for " << size << " Batch size." << std::endl << std::endl;

    // -----------------------------------------------------------------------------

    std::cout << "Running Bubble Sort Algorithm Performance" << std::endl;
    std::cout << "Time Complexity : O(N^2)" << std::endl;
    std::cout << "Space Complexity : O(1)" << std::endl;

    averageTime = 0;
    for (int i = 0; i < 10; i++) {
        averageTime += BubbleSortPerf(arr, size, sortedArray) / 10.;
    }

    std::cout << "Average time for Bubble Sort is " << averageTime << "ms for " << size << " Batch size." << std::endl << std::endl;

    // -----------------------------------------------------------------------------


    return 0;
}
#include <iostream>
#include <random>
#include <algorithm>

#include "Algorithms/mergesort.h"
#include "Algorithms/algorithms.h"

int main() {
    std::linear_congruential_engine<std::uint_fast32_t, 48271, 0, 2147483647> generator;
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

    std::cout << "Average time for Merge Sort is " << averageTime << "ms for " << size << " Batch size." << std::endl;

    // -----------------------------------------------------------------------------


    return 0;
}
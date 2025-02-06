//
// Created by chame on 2/6/2025.
//

#include "SelectionSort.h"

void SelectionSort(int arr[], const int size) {
    for (int currIndex = 0; currIndex < size; currIndex++) {
        int minIndex = currIndex;

        for (int counter = currIndex; counter < size; counter++) {
            if (arr[counter] < arr[minIndex]) {
                minIndex = counter;
            }
        }

        const int temp = arr[currIndex];
        arr[currIndex] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

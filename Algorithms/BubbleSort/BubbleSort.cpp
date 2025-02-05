//
// Created by chame on 2/5/2025.
//

#include "BubbleSort.h"

void BubbleSort(int arr[], const int size) {
    while (true) {
        bool change = false;
        for (int currIndex = 1; currIndex < size; currIndex++) {
            const int currElement = arr[currIndex];
            const int prevElement = arr[currIndex - 1];

            if (currElement < prevElement) {
                const int temp = prevElement;
                arr[currIndex - 1] = currElement;
                arr[currIndex] = temp;
                change = true;
            }
        }
        if (!change) {
            break;
        }
    }
}

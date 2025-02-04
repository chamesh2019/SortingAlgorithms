//
// Created by chame on 2/4/2025.
//

#include "InsertionSort.h"

#include <iostream>

void InsertionSort(int arr[], const int size) {
    for (int currIndex = 1; currIndex < size; currIndex++){
        const int currElement = arr[currIndex];
        int counter = currIndex - 1;

        while (true) {
            if (counter < 0) {
                arr[0] = currElement;
                break;
            }

            if (currElement < arr[counter]) {
                arr[counter+1] = arr[counter];
            } else {
                arr[counter+1] = currElement;
                break;
            }

            counter--;
        }
    }
}

//
// Created by chame on 2/6/2025.
//

#include "QuickSort.h"

void QuickSort(int arr[], const int start, const int end) {
    if (start >= end) return;

    const int pivotIndex = start + (end - start) / 2;
    const int pivotValue = arr[pivotIndex];
    int i = start, j = end;

    while (i <= j) {
        while (arr[i] < pivotValue) i++;
        while (arr[j] > pivotValue) j--;
        if (i <= j) {
            const int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    if (start < j) QuickSort(arr, start, j);
    if (i < end) QuickSort(arr, i, end);
}
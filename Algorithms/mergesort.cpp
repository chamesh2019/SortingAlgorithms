#include "mergeSort.h"

void merge(int arr[], const int lowIndex, const int middle, const int highIndex, int size) {
    int i = lowIndex;
    int j = middle+1;
    int k = lowIndex;

    int tempArr[size];

    while (i<=middle && j<=highIndex) {
        if (arr[i] <= arr[j]) {
            tempArr[k] = arr[i];
            i++;
            k++;
        } else {
            tempArr[k] = arr[j];
            j++;
            k++;
        }
    }

    while (i <= middle) {
        tempArr[k] = arr[i];
        i++;
        k++;
    }

    while (j <= highIndex) {
        tempArr[k] = arr[j];
        j++;
        k++;
    }

    for (int t = lowIndex; t <= highIndex; t++) {
        arr[t] = tempArr[t];
    }
}


void mergeSort(int arr[], const int lowIndex, const int highIndex, const int size) {
    if (lowIndex < highIndex) {
        const int middle = (lowIndex + highIndex) / 2;
        mergeSort(arr, lowIndex, middle, size);
        mergeSort(arr, middle+1, highIndex, size);
        merge(arr, lowIndex, middle, highIndex, size);
    }
}

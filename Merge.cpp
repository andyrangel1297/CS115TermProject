#include <iostream>

using namespace std;

#include "merge.h"

void Merge::mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void Merge::merge(int arr[], int left, int mid, int right) {
    int i = 0, j = 0, k = left;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // allocate memory for temp arrays
    int* L = new int[n1];
    int* R = new int[n2];

    // copy data to temp arrays
    for (i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }

    for (j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    // merge the temp arrrays back into arr[left..right]
    i = 0;
    j = 0;

    while (i < n1 && j < n2) {

        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // copy the remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // copy the remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // free the memory allocated for temp left and right arrrays
    delete[] L;
    delete[] R;
}
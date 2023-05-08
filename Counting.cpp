#include <iostream>

using namespace std;

#include "counting.h"

// counting sort function
void Counting::countingSort(int arr[], int size) {
    // find max element in array
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // create count array
    int* count = new int[max + 1];
    for (int i = 0; i < max + 1; i++) {
        count[i] = 0;
    }

    // store count of each element
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    // change count[i] so that count[i] now contains actual position of element
    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }

    // create output array
    int* output = new int[size];

    // build output array
    for (int i = size - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // copy output array to original array
    for (int i = 0; i < size; i++) {
        arr[i] = output[i];
    }

    // delete dynamic arrays
    delete[] count;
    delete[] output;
}
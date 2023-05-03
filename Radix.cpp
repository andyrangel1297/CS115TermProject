#include <iostream>

using namespace std;

#include "radix.h"

// function to get the maximum value in the array
int Radix::getMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// function to perform counting sort on the array based on the current digit
void Radix::countSort(int arr[], int size,  int exp) {
    int* output = new int[size];
    int i, count[10] = {0};

    // calculate count of elements in each bucket
    for (i = 0; i < size; i++) {
        count[(arr[i]/exp) % 10]++;
    }

    // calculate cumulative count
    for (i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // build output array
    for (i = size - 1; i >= 0; i--) {
        output[count[(arr[i]/exp) % 10] - 1] = arr[i];
        count[(arr[i]/exp) % 10]--;
    }

    // copy output array to arr
    for (i = 0; i < size; i++) {
        arr[i] = output[i];
    }

    // free memory
    delete[] output;
}

// main function to perform radix sort
void Radix::radixSort(int arr[], int size) {
    int max = getMax(arr, size);

    // perform counting sort for every digit, starting from least significant digit
    for (int exp = 1; max/exp > 0; exp *= 10) {
        countSort(arr, size, exp);
    }
}
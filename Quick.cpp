#include <iostream>

using namespace std;

#include "quick.h"

void Quick::quickSort(int arr[], int start, int end) {
    int q;

    if (start < end) {

        //determine location to partition array
        q = partition(arr, start, end);
        quickSort(arr, start, q);
        quickSort(arr, q + 1, end);
    }
}

int Quick::partition(int A[], int low, int high) {
    int pivot;
    int i = low - 1;
    int j = high + 1;
    int temp;

    // find median of first, middle, and last
    int mid = (high + low) / 2;

    if ((A[low] < A[mid] && A[mid] < A[high]) || (A[high] < A[mid] && A[mid] < A[low]) || (A[low] == A[mid] && A[low] < A[high])) {

        // middle element is the median
        pivot = A[mid];

    } else if ((A[mid] < A[low] && A[low] < A[high]) || (A[high] < A[low] && A[low] < A[mid]) || (A[low] == A[high] && A[low] < A[mid])) {

            // first element is the median
            pivot = A[low];

    } else {

            //last element is the median
            pivot = A[high];
    }

    while (true) {
        // find element less than pivot

        do {
            j--;
        } while (A[j] > pivot);

        // find element greater than pivot
        do {
            i++;
        } while (A[i] < pivot);

        // swap elements
        if (i < j) {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        } else {
            return j;
        }
    }
}

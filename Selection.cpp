#include <iostream>
using namespace std;

#include "selection.h"

// selection sort function
void Selection::selectionSort(int arr[], int size) {
    // selection sort algorithm
    for (int i = 0; i < (size - 1); i++) {
        int smallestIndex = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[smallestIndex]) {
                smallestIndex = j;
            }
        }
        // swap function
       int temp = arr[i];
        arr[i] = arr[smallestIndex];
        arr[smallestIndex] = temp;
    }
}


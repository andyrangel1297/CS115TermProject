#include <iostream>

using namespace std;

#include "heap.h"

// heap sort function
void Heap::heapSort(int arr[], int size) {
    // build heap
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(arr, size, i);
    }
    
    // extract elements from heap
    for (int i = size - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

// heapify function
void Heap::heapify(int arr[], int size, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    // if left child is larger than root
    if (left < size && arr[left] > arr[largest]) {
        largest = left;
    }
    
    // if right child is larger than largest so far
    if (right < size && arr[right] > arr[largest]) {
        largest = right;
    }

    // if largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, size, largest);
    }
}

// private helper function to swap elements
void Heap::swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

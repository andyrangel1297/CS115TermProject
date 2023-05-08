#include <iostream>

using namespace std;

// header files for each sort
#include "Selection.h"
#include "Merge.h"
#include "Insertion.h"
#include "Bubble.h"
#include "Quick.h"
#include "Radix.h"
#include "Heap.h"
#include "Counting.h"


// function for returning original unsorted array using reference
void createOriginalArray(int arr[], int size);   
void printOriginalArray(int arr[], int size, string message);
void printSortedArray(int arr[], int size, string message);


// main function
int main() {

    // create an array with 10 elements
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = 10;

    // print out unsorted array
    printOriginalArray(arr, size, "Original array: ");

    // SELECTION SORT FUNCTION #1 ---------------------------------------------
    // make an object of sort and call on selection sort class to handle sort
    Selection selection;
    selection.selectionSort(arr, size);

    // print out sorted array to check selection sort
    printSortedArray(arr, size, "Array after selection sort: ");

    // END OF SELECTION SORT FUNCTION #1 --------------------------------------

    // call function that creates original unsorted array
    createOriginalArray(arr, size);

    // print out unsorted array
    printOriginalArray(arr, size, "Original array: ");

    // MERGE SORT FUNCTION #2 -------------------------------------------------
    // make an object of sort and call on merge sort class to handle sort
    Merge merge;
    merge.mergeSort(arr, 0, size - 1);

    // print out sorted array to check merge sort
    printSortedArray(arr, size, "Array after merge sort: ");

    // END OF MERGE SORT FUNCTION #2 ------------------------------------------

    // call function that creates original unsorted array
    createOriginalArray(arr, size);

    // print out unsorted array
    printOriginalArray(arr, size, "Original array: ");

    // INSERTION SORT FUNCTION #3 ---------------------------------------------
    // make an object of sort and call on insertion sort class to handle sort
    Insertion insertion;
    insertion.insertionSort(arr, size);

    // print out sorted array to check insertion sort
    printSortedArray(arr, size, "Array after insertion sort: ");
    
    // END OF INSERTION SORT FUNCTION #3 --------------------------------------

    // call function that creates original unsorted array
    createOriginalArray(arr, size);

    // print out unsorted array
    printOriginalArray(arr, size, "Original array: ");

    // BUBBLE SORT FUNCTION #4 ------------------------------------------------
    // make an object of sort and call on bubble sort class to handle sort
    Bubble bubble;
    bubble.bubbleSort(arr, size);

    // print out sorted array to check bubble sort
    printSortedArray(arr, size, "Array after bubble sort: ");

    // END OF BUBBLE SORT FUNCTION #4 -----------------------------------------

    // call function that creates original unsorted array
    createOriginalArray(arr, size);

    // print out unsorted array
    printOriginalArray(arr, size, "Original array: ");

    // QUICK SORT FUNCTION #5 -------------------------------------------------
    // make an object of sort and call on quick sort class to handle sort
    Quick quick;
    quick.quickSort(arr, 0, size - 1);

    // print out sorted array to check quick sort
    printSortedArray(arr, size, "Array after quick sort: ");

    // END OF QUICK SORT FUNCTION #5 ------------------------------------------
    
    // call function that creates original unsorted array
    createOriginalArray(arr, size);

    // print out unsorted array
    printOriginalArray(arr, size, "Original array: ");

    // RADIX SORT FUNCTION #6 -------------------------------------------------
    // make an object of sort and call on radix sort class to handle sort
    Radix radix;
    radix.radixSort(arr, size);

    // print out sorted array to check radix sort
    printSortedArray(arr, size, "Array after radix sort: ");

    // END OF RADIX SORT FUNCTION #6 ------------------------------------------

    // call function that creates original unsorted array
    createOriginalArray(arr, size);

    // print out unsorted array
    printOriginalArray(arr, size, "Original array: ");

    // HEAP SORT FUNCTION #7 --------------------------------------------------
    // make an object of sort and call on heap sort class to handle sort
    Heap heap;
    heap.heapSort(arr, size);

    // print out sorted array to check heap sort
    printSortedArray(arr, size, "Array after heap sort: ");

    // END OF HEAP SORT FUNCTION #7 -------------------------------------------

    // call function that creates original unsorted array
    createOriginalArray(arr, size);

    // print out unsorted array
    printOriginalArray(arr, size, "Original array: ");

    // COUNTING SORT FUNCTION #8 ----------------------------------------------
    // make an object of sort and call on counting sort class to handle sort
    Counting counting;
    counting.countingSort(arr, size);

    // print out sorted array to check counting sort
    printSortedArray(arr, size, "Array after counting sort: ");

    // END OF COUNTING SORT FUNCTION #8 ---------------------------------------

    return 0;
}

// function for returning original unsorted array using reference
void createOriginalArray(int arr[], int size) {
    // create an array with 10 elements
    int ogArr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    // replace original array with these values
    for (int i = 0; i < size; i++) {
        arr[i] = ogArr[i];
    }
}

// function for printing original unsorted array
void printOriginalArray(int arr[], int size, string message) {
    cout << message << ": ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// function for printing sorted array after each sort
void printSortedArray(int arr[], int size, string message) {
    cout << message << ": ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}


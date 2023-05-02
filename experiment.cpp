#include <iostream>

using namespace std;

// header files for each sort
#include "Selection.h"
#include "Merge.h"
#include "Insertion.h"
#include "Bubble.h"


// function for returning original unsorted array using reference
void createOriginalArray(int arr[], int size);   


// main function
int main() {

    // create an array with 10 elements
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = 10;

    // print out unsorted array
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // SELECTION SORT FUNCTION #1 ---------------------------------------------
    // make an object of sort and call on selection sort class to handle sort
    Selection selection;
    selection.selectionSort(arr, size);

    // print out sorted array to check selection sort
    cout << "Array after selection sort: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    // END OF SELECTION SORT FUNCTION #1 --------------------------------------

    // call function that creates original unsorted array
    createOriginalArray(arr, size);

    // print out unsorted array
    cout << "\nOriginal array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // MERGE SORT FUNCTION #2 -------------------------------------------------
    // make an object of sort and call on merge sort class to handle sort
    Merge merge;
    merge.mergeSort(arr, 0, size - 1);

    // print out sorted array to check merge sort
    cout << "Array after merge sort: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    // END OF MERGE SORT FUNCTION #2 ------------------------------------------

    // call function that creates original unsorted array
    createOriginalArray(arr, size);

    // print out unsorted array
    cout << "\nOriginal array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // INSERTION SORT FUNCTION #3 ---------------------------------------------
    // make an object of sort and call on insertion sort class to handle sort
    Insertion insertion;
    insertion.insertionSort(arr, size);

    // print out sorted array to check insertion sort
    cout << "Array after insertion sort: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    // END OF INSERTION SORT FUNCTION #3 --------------------------------------

    // call function that creates original unsorted array
    createOriginalArray(arr, size);

    // print out unsorted array
    cout << "\nOriginal array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // BUBBLE SORT FUNCTION #4 ------------------------------------------------
    // make an object of sort and call on bubble sort class to handle sort
    Bubble bubble;
    bubble.bubbleSort(arr, size);

    // print out sorted array to check bubble sort
    cout << "Array after bubble sort: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    // END OF BUBBLE SORT FUNCTION #4 -----------------------------------------
    

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



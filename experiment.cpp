#include <iostream>
#include <string>
// header files for implementation of random number generator
#include <cstdlib>
#include <ctime>
// header file for chrono library
#include <chrono>

using namespace std;
using namespace std::chrono;

// header files for each sort
#include "Selection.h"
#include "Merge.h"
#include "Insertion.h"
#include "Bubble.h"
#include "Quick.h"
#include "Radix.h"
#include "Heap.h"
#include "Counting.h"


// functions repeated for each sort
// functions for reordering array to best, worst, and average case
void reOrderBestCase(int arr[], int size);
void reOrderWorstCase(int arr[], int size);
void reOrderAvgCase(int arr[], int size);

void printOriginalArray(int arr[], int size, string message);
void printSortedArray(int arr[], int size, string message);


// main function
int main() {

    // create 3 arrays for each case (sizes 10, 100, 1000)
    int smallArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int smallSize = 10;

    int mediumArr[100];
    for (int i = 0; i < 100; i++) {
        mediumArr[i] = i + 1;
    }
    int mediumSize = 100;

    int largeArr[1000];
    for (int i = 0; i < 1000; i++) {
        largeArr[i] = i + 1;
    }
    int largeSize = 1000;

    // // print out all original arrays
    // printOriginalArray(smallArr, smallSize, "Original array: ");
    // printOriginalArray(mediumArr, mediumSize, "Original array: ");
    // printOriginalArray(largeArr, largeSize, "Original array: ");

    // SELECTION SORT FUNCTION #1 ---------------------------------------------
    // make an object of sort and call on selection sort class to handle sort
    Selection selection;

    // Best Case Sort
    auto start = high_resolution_clock::now();
    selection.selectionSort(smallArr, smallSize);
    auto stop = high_resolution_clock::now();
    cout << "Time taken for best case selection sort on small array: " << duration_cast<microseconds>(stop - start).count() << " microseconds" << endl;
    auto start2 = high_resolution_clock::now();
    selection.selectionSort(mediumArr, mediumSize);
    auto stop2 = high_resolution_clock::now();
    cout << "Time taken for best case selection sort on medium array: " << duration_cast<microseconds>(stop2 - start2).count() << " microseconds" << endl;
    auto start3 = high_resolution_clock::now();
    selection.selectionSort(largeArr, largeSize);
    auto stop3 = high_resolution_clock::now();
    cout << "Time taken for best case selection sort on large array: " << duration_cast<microseconds>(stop3 - start3).count() << " microseconds" << endl;

    // // print out sorted arrays to check selection sort [check passed]
    // printSortedArray(smallArr, smallSize, "Array after selection sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after selection sort: "); 
    // printSortedArray(largeArr, largeSize, "Array after selection sort: "); 

    // reOrder arrays for worst case
    reOrderWorstCase(smallArr, smallSize);
    reOrderWorstCase(mediumArr, mediumSize);
    reOrderWorstCase(largeArr, largeSize);

    // // print out worst case arrays
    // printOriginalArray(smallArr, smallSize, "Worst case array: ");
    // printOriginalArray(mediumArr, mediumSize, "Worst case array: ");
    // printOriginalArray(largeArr, largeSize, "Worst case array: ");

    // Worst Case Sort
    auto start4 = high_resolution_clock::now();
    selection.selectionSort(smallArr, smallSize);
    auto stop4 = high_resolution_clock::now();
    cout << "Time taken for worst case selection sort on small array: " << duration_cast<microseconds>(stop4 - start4).count() << " microseconds" << endl;
    auto start5 = high_resolution_clock::now();
    selection.selectionSort(mediumArr, mediumSize); 
    auto stop5 = high_resolution_clock::now();
    cout << "Time taken for worst case selection sort on medium array: " << duration_cast<microseconds>(stop5 - start5).count() << " microseconds" << endl;
    auto start6 = high_resolution_clock::now();
    selection.selectionSort(largeArr, largeSize);
    auto stop6 = high_resolution_clock::now();
    cout << "Time taken for worst case selection sort on large array: " << duration_cast<microseconds>(stop6 - start6).count() << " microseconds" << endl;

    // // print out sorted worst case arrays
    // printSortedArray(smallArr, smallSize, "Array after selection sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after selection sort: ");
    // printSortedArray(largeArr, largeSize, "Array after selection sort: ");

    // reOrder arrays for average case
    reOrderAvgCase(smallArr, smallSize);
    reOrderAvgCase(mediumArr, mediumSize);
    reOrderAvgCase(largeArr, largeSize);

    // // print out average case arrays
    // printOriginalArray(smallArr, smallSize, "Average case array: ");
    // printOriginalArray(mediumArr, mediumSize, "Average case array: ");
    // printOriginalArray(largeArr, largeSize, "Average case array: ");

    // Average Case Sort
    auto start7 = high_resolution_clock::now();
    selection.selectionSort(smallArr, smallSize);
    auto stop7 = high_resolution_clock::now();
    cout << "Time taken for average case selection sort on small array: " << duration_cast<microseconds>(stop7 - start7).count() << " microseconds" << endl;
    auto start8 = high_resolution_clock::now();
    selection.selectionSort(mediumArr, mediumSize);
    auto stop8 = high_resolution_clock::now();
    cout << "Time taken for average case selection sort on medium array: " << duration_cast<microseconds>(stop8 - start8).count() << " microseconds" << endl;
    auto start9 = high_resolution_clock::now();
    selection.selectionSort(largeArr, largeSize);
    auto stop9 = high_resolution_clock::now();
    cout << "Time taken for average case selection sort on large array: " << duration_cast<microseconds>(stop9 - start9).count() << " microseconds" << endl;

    // // print out sorted average case arrays
    // printSortedArray(smallArr, smallSize, "Array after selection sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after selection sort: ");
    // printSortedArray(largeArr, largeSize, "Array after selection sort: ");
      

    // END OF SELECTION SORT FUNCTION #1 --------------------------------------

    // // print out unsorted array
    // printOriginalArray(smallArr, smallSize, "Original array: ");

    // MERGE SORT FUNCTION #2 -------------------------------------------------
    // make an object of sort and call on merge sort class to handle sort
    Merge merge;
    merge.mergeSort(smallArr, 0, smallSize - 1);

    // // print out sorted array to check merge sort
    // printSortedArray(smallArr, smallSize, "Array after merge sort: ");

    // END OF MERGE SORT FUNCTION #2 ------------------------------------------


    // // print out unsorted array
    // printOriginalArray(smallArr, smallSize, "Original array: ");

    // INSERTION SORT FUNCTION #3 ---------------------------------------------
    // make an object of sort and call on insertion sort class to handle sort
    Insertion insertion;
    insertion.insertionSort(smallArr, smallSize);

    // // print out sorted array to check insertion sort
    // printSortedArray(smallArr, smallSize, "Array after insertion sort: ");
    
    // END OF INSERTION SORT FUNCTION #3 --------------------------------------


    // // print out unsorted array
    // printOriginalArray(smallArr, smallSize, "Original array: ");

    // BUBBLE SORT FUNCTION #4 ------------------------------------------------
    // make an object of sort and call on bubble sort class to handle sort
    Bubble bubble;
    bubble.bubbleSort(smallArr, smallSize);

    // // print out sorted array to check bubble sort
    // printSortedArray(smallArr, smallSize, "Array after bubble sort: ");

    // END OF BUBBLE SORT FUNCTION #4 -----------------------------------------



    // // print out unsorted array
    // printOriginalArray(smallArr, smallSize, "Original array: ");

    // QUICK SORT FUNCTION #5 -------------------------------------------------
    // make an object of sort and call on quick sort class to handle sort
    Quick quick;
    quick.quickSort(smallArr, 0, smallSize - 1);

    // // print out sorted array to check quick sort
    // printSortedArray(smallArr, smallSize, "Array after quick sort: ");

    // END OF QUICK SORT FUNCTION #5 ------------------------------------------
    


    // // print out unsorted array
    // printOriginalArray(smallArr, smallSize, "Original array: ");

    // RADIX SORT FUNCTION #6 -------------------------------------------------
    // make an object of sort and call on radix sort class to handle sort
    Radix radix;
    radix.radixSort(smallArr, smallSize);

    // // print out sorted array to check radix sort
    // printSortedArray(smallArr, smallSize, "Array after radix sort: ");

    // END OF RADIX SORT FUNCTION #6 ------------------------------------------



    // // print out unsorted array
    // printOriginalArray(smallArr, smallSize, "Original array: ");

    // HEAP SORT FUNCTION #7 --------------------------------------------------
    // make an object of sort and call on heap sort class to handle sort
    Heap heap;
    heap.heapSort(smallArr, smallSize);

    // // print out sorted array to check heap sort
    // printSortedArray(smallArr, smallSize, "Array after heap sort: ");

    // END OF HEAP SORT FUNCTION #7 -------------------------------------------



    // // print out unsorted array
    // printOriginalArray(smallArr, smallSize, "Original array: ");

    // COUNTING SORT FUNCTION #8 ----------------------------------------------
    // make an object of sort and call on counting sort class to handle sort
    Counting counting;
    counting.countingSort(smallArr, smallSize);

    // // print out sorted array to check counting sort
    // printSortedArray(smallArr, smallSize, "Array after counting sort: ");

    // END OF COUNTING SORT FUNCTION #8 ---------------------------------------

    return 0;
}

// function that reorders array to best case
void reOrderBestCase(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
}

// function that reorders array to worst case
void reOrderWorstCase(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = size - i;
    }
}

// function that reorders array to average case
// function makes array with random, distinct values within range of size
void reOrderAvgCase(int arr[], int size) {
    // create array of size size
    int* temp = new int[size];

    // fill array with values 1 to size
    for (int i = 0; i < size; i++) {
        temp[i] = i + 1;
    }

    // shuffle array
    for (int i = 0; i < size; i++) {
        int j = rand() % size;
        int temp2 = temp[i];
        temp[i] = temp[j];
        temp[j] = temp2;
    }

    // copy shuffled array into original array
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }

    // delete temp array
    delete[] temp;
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
    cout << endl;
}


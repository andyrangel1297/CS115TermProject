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
//======================================================================================================================================================================
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
//======================================================================================================================================================================

    // // print out unsorted array
    // printOriginalArray(smallArr, smallSize, "Original array: ");
    // printOriginalArray(mediumArr, mediumSize, "Original array: ");
    // printOriginalArray(largeArr, largeSize, "Original array: ");

//======================================================================================================================================================================
    // MERGE SORT FUNCTION #2 -------------------------------------------------
    // make an object of sort and call on merge sort class to handle sort
    Merge merge;

    // Best Case Sort
    auto start10 = high_resolution_clock::now();
    merge.mergeSort(smallArr, 0, smallSize - 1);
    auto stop10 = high_resolution_clock::now();
    cout << "Time taken for best case merge sort on small array: " << duration_cast<microseconds>(stop10 - start10).count() << " microseconds" << endl;
    auto start11 = high_resolution_clock::now();
    merge.mergeSort(mediumArr, 0, mediumSize - 1);
    auto stop11 = high_resolution_clock::now();
    cout << "Time taken for best case merge sort on medium array: " << duration_cast<microseconds>(stop11 - start11).count() << " microseconds" << endl;
    auto start12 = high_resolution_clock::now();
    merge.mergeSort(largeArr, 0, largeSize - 1);
    auto stop12 = high_resolution_clock::now();
    cout << "Time taken for best case merge sort on large array: " << duration_cast<microseconds>(stop12 - start12).count() << " microseconds" << endl;

    // // print out sorted array to check merge sort
    // printSortedArray(smallArr, smallSize, "Array after merge sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after merge sort: ");
    // printSortedArray(largeArr, largeSize, "Array after merge sort: ");

    // reOrder arrays for worst case
    reOrderWorstCase(smallArr, smallSize);
    reOrderWorstCase(mediumArr, mediumSize);
    reOrderWorstCase(largeArr, largeSize);

    // // print out worst case arrays
    // printOriginalArray(smallArr, smallSize, "Worst case array: ");
    // printOriginalArray(mediumArr, mediumSize, "Worst case array: ");
    // printOriginalArray(largeArr, largeSize, "Worst case array: ");

    // Worst Case Sort
    auto start13 = high_resolution_clock::now();
    merge.mergeSort(smallArr, 0, smallSize - 1);
    auto stop13 = high_resolution_clock::now();
    cout << "Time taken for worst case merge sort on small array: " << duration_cast<microseconds>(stop13 - start13).count() << " microseconds" << endl;
    auto start14 = high_resolution_clock::now();
    merge.mergeSort(mediumArr, 0, mediumSize - 1);
    auto stop14 = high_resolution_clock::now();
    cout << "Time taken for worst case merge sort on medium array: " << duration_cast<microseconds>(stop14 - start14).count() << " microseconds" << endl;
    auto start15 = high_resolution_clock::now();
    merge.mergeSort(largeArr, 0, largeSize - 1);
    auto stop15 = high_resolution_clock::now();
    cout << "Time taken for worst case merge sort on large array: " << duration_cast<microseconds>(stop15 - start15).count() << " microseconds" << endl;

    // // print out sorted worst case arrays
    // printSortedArray(smallArr, smallSize, "Array after merge sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after merge sort: ");
    // printSortedArray(largeArr, largeSize, "Array after merge sort: ");

    // reOrder arrays for average case
    reOrderAvgCase(smallArr, smallSize);
    reOrderAvgCase(mediumArr, mediumSize);
    reOrderAvgCase(largeArr, largeSize);

    // // print out average case arrays
    // printOriginalArray(smallArr, smallSize, "Average case array: ");
    // printOriginalArray(mediumArr, mediumSize, "Average case array: ");
    // printOriginalArray(largeArr, largeSize, "Average case array: ");

    // Average Case Sort
    auto start16 = high_resolution_clock::now();
    merge.mergeSort(smallArr, 0, smallSize - 1);
    auto stop16 = high_resolution_clock::now();
    cout << "Time taken for average case merge sort on small array: " << duration_cast<microseconds>(stop16 - start16).count() << " microseconds" << endl;
    auto start17 = high_resolution_clock::now();
    merge.mergeSort(mediumArr, 0, mediumSize - 1);
    auto stop17 = high_resolution_clock::now();
    cout << "Time taken for average case merge sort on medium array: " << duration_cast<microseconds>(stop17 - start17).count() << " microseconds" << endl;
    auto start18 = high_resolution_clock::now();
    merge.mergeSort(largeArr, 0, largeSize - 1);
    auto stop18 = high_resolution_clock::now();
    cout << "Time taken for average case merge sort on large array: " << duration_cast<microseconds>(stop18 - start18).count() << " microseconds" << endl;

    // // print out sorted average case arrays
    // printSortedArray(smallArr, smallSize, "Array after merge sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after merge sort: ");
    // printSortedArray(largeArr, largeSize, "Array after merge sort: ");

    // END OF MERGE SORT FUNCTION #2 ------------------------------------------
//======================================================================================================================================================================


    // // print out unsorted array
    // printOriginalArray(smallArr, smallSize, "Original array: ");
    // printOriginalArray(mediumArr, mediumSize, "Original array: ");
    // printOriginalArray(largeArr, largeSize, "Original array: ");

//======================================================================================================================================================================
    // INSERTION SORT FUNCTION #3 ---------------------------------------------
    // make an object of sort and call on insertion sort class to handle sort
    Insertion insertion;

    // Best Case Sort
    auto start19 = high_resolution_clock::now();
    insertion.insertionSort(smallArr, smallSize);
    auto stop19 = high_resolution_clock::now();
    cout << "Time taken for best case insertion sort on small array: " << duration_cast<microseconds>(stop19 - start19).count() << " microseconds" << endl;
    auto start20 = high_resolution_clock::now();
    insertion.insertionSort(mediumArr, mediumSize);
    auto stop20 = high_resolution_clock::now();
    cout << "Time taken for best case insertion sort on medium array: " << duration_cast<microseconds>(stop20 - start20).count() << " microseconds" << endl;
    auto start21 = high_resolution_clock::now();
    insertion.insertionSort(largeArr, largeSize);
    auto stop21 = high_resolution_clock::now();
    cout << "Time taken for best case insertion sort on large array: " << duration_cast<microseconds>(stop21 - start21).count() << " microseconds" << endl;

    // // print out sorted array to check insertion sort
    // printSortedArray(smallArr, smallSize, "Array after insertion sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after insertion sort: ");
    // printSortedArray(largeArr, largeSize, "Array after insertion sort: ");

    // reOrder arrays for worst case
    reOrderWorstCase(smallArr, smallSize);
    reOrderWorstCase(mediumArr, mediumSize);
    reOrderWorstCase(largeArr, largeSize);

    // // print out worst case arrays
    // printOriginalArray(smallArr, smallSize, "Worst case array: ");
    // printOriginalArray(mediumArr, mediumSize, "Worst case array: ");
    // printOriginalArray(largeArr, largeSize, "Worst case array: ");

    // Worst Case Sort
    auto start22 = high_resolution_clock::now();
    insertion.insertionSort(smallArr, smallSize);
    auto stop22 = high_resolution_clock::now();
    cout << "Time taken for worst case insertion sort on small array: " << duration_cast<microseconds>(stop22 - start22).count() << " microseconds" << endl;
    auto start23 = high_resolution_clock::now();
    insertion.insertionSort(mediumArr, mediumSize);
    auto stop23 = high_resolution_clock::now();
    cout << "Time taken for worst case insertion sort on medium array: " << duration_cast<microseconds>(stop23 - start23).count() << " microseconds" << endl;
    auto start24 = high_resolution_clock::now();
    insertion.insertionSort(largeArr, largeSize);
    auto stop24 = high_resolution_clock::now();
    cout << "Time taken for worst case insertion sort on large array: " << duration_cast<microseconds>(stop24 - start24).count() << " microseconds" << endl;

    // // print out sorted worst case arrays
    // printSortedArray(smallArr, smallSize, "Array after insertion sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after insertion sort: ");
    // printSortedArray(largeArr, largeSize, "Array after insertion sort: ");

    // reOrder arrays for average case
    reOrderAvgCase(smallArr, smallSize);
    reOrderAvgCase(mediumArr, mediumSize);
    reOrderAvgCase(largeArr, largeSize);

    // // print out average case arrays
    // printOriginalArray(smallArr, smallSize, "Average case array: ");
    // printOriginalArray(mediumArr, mediumSize, "Average case array: ");
    // printOriginalArray(largeArr, largeSize, "Average case array: ");

    // Average Case Sort
    auto start25 = high_resolution_clock::now();
    insertion.insertionSort(smallArr, smallSize);
    auto stop25 = high_resolution_clock::now();
    cout << "Time taken for average case insertion sort on small array: " << duration_cast<microseconds>(stop25 - start25).count() << " microseconds" << endl;
    auto start26 = high_resolution_clock::now();
    insertion.insertionSort(mediumArr, mediumSize);
    auto stop26 = high_resolution_clock::now();
    cout << "Time taken for average case insertion sort on medium array: " << duration_cast<microseconds>(stop26 - start26).count() << " microseconds" << endl;
    auto start27 = high_resolution_clock::now();
    insertion.insertionSort(largeArr, largeSize);
    auto stop27 = high_resolution_clock::now();
    cout << "Time taken for average case insertion sort on large array: " << duration_cast<microseconds>(stop27 - start27).count() << " microseconds" << endl;

    // // print out sorted average case arrays
    // printSortedArray(smallArr, smallSize, "Array after insertion sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after insertion sort: ");
    // printSortedArray(largeArr, largeSize, "Array after insertion sort: ");

    // END OF INSERTION SORT FUNCTION #3 --------------------------------------
//======================================================================================================================================================================

    // // print out unsorted array
    // printOriginalArray(smallArr, smallSize, "Original array: ");
    // printOriginalArray(mediumArr, mediumSize, "Original array: ");
    // printOriginalArray(largeArr, largeSize, "Original array: ");

//======================================================================================================================================================================
    // BUBBLE SORT FUNCTION #4 ------------------------------------------------
    // make an object of sort and call on bubble sort class to handle sort
    Bubble bubble;

    // Bubble Sort Best Case
    auto start28 = high_resolution_clock::now();
    bubble.bubbleSort(smallArr, smallSize);
    auto stop28 = high_resolution_clock::now();
    cout << "Time taken for best case bubble sort on small array: " << duration_cast<microseconds>(stop28 - start28).count() << " microseconds" << endl;
    auto start29 = high_resolution_clock::now();
    bubble.bubbleSort(mediumArr, mediumSize);
    auto stop29 = high_resolution_clock::now();
    cout << "Time taken for best case bubble sort on medium array: " << duration_cast<microseconds>(stop29 - start29).count() << " microseconds" << endl;
    auto start30 = high_resolution_clock::now();
    bubble.bubbleSort(largeArr, largeSize);
    auto stop30 = high_resolution_clock::now();
    cout << "Time taken for best case bubble sort on large array: " << duration_cast<microseconds>(stop30 - start30).count() << " microseconds" << endl;

    // // print out sorted array to check bubble sort
    // printSortedArray(smallArr, smallSize, "Array after bubble sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after bubble sort: ");
    // printSortedArray(largeArr, largeSize, "Array after bubble sort: ");

    // reOrder arrays for worst case
    reOrderWorstCase(smallArr, smallSize);
    reOrderWorstCase(mediumArr, mediumSize);
    reOrderWorstCase(largeArr, largeSize);

    // // print out worst case arrays
    // printOriginalArray(smallArr, smallSize, "Worst case array: ");
    // printOriginalArray(mediumArr, mediumSize, "Worst case array: ");
    // printOriginalArray(largeArr, largeSize, "Worst case array: ");

    // Bubble Sort Worst Case
    auto start31 = high_resolution_clock::now();
    bubble.bubbleSort(smallArr, smallSize);
    auto stop31 = high_resolution_clock::now();
    cout << "Time taken for worst case bubble sort on small array: " << duration_cast<microseconds>(stop31 - start31).count() << " microseconds" << endl;
    auto start32 = high_resolution_clock::now();
    bubble.bubbleSort(mediumArr, mediumSize);
    auto stop32 = high_resolution_clock::now();
    cout << "Time taken for worst case bubble sort on medium array: " << duration_cast<microseconds>(stop32 - start32).count() << " microseconds" << endl;
    auto start33 = high_resolution_clock::now();
    bubble.bubbleSort(largeArr, largeSize);
    auto stop33 = high_resolution_clock::now();
    cout << "Time taken for worst case bubble sort on large array: " << duration_cast<microseconds>(stop33 - start33).count() << " microseconds" << endl;

    // // print out sorted array to check bubble sort
    // printSortedArray(smallArr, smallSize, "Array after bubble sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after bubble sort: ");
    // printSortedArray(largeArr, largeSize, "Array after bubble sort: ");

    // reOrder arrays for average case
    reOrderAvgCase(smallArr, smallSize);
    reOrderAvgCase(mediumArr, mediumSize);
    reOrderAvgCase(largeArr, largeSize);

    // // print out average case arrays
    // printOriginalArray(smallArr, smallSize, "Average case array: ");
    // printOriginalArray(mediumArr, mediumSize, "Average case array: ");
    // printOriginalArray(largeArr, largeSize, "Average case array: ");

    // Bubble Sort Average Case
    auto start34 = high_resolution_clock::now();
    bubble.bubbleSort(smallArr, smallSize);
    auto stop34 = high_resolution_clock::now();
    cout << "Time taken for average case bubble sort on small array: " << duration_cast<microseconds>(stop34 - start34).count() << " microseconds" << endl;
    auto start35 = high_resolution_clock::now();
    bubble.bubbleSort(mediumArr, mediumSize);
    auto stop35 = high_resolution_clock::now();
    cout << "Time taken for average case bubble sort on medium array: " << duration_cast<microseconds>(stop35 - start35).count() << " microseconds" << endl;
    auto start36 = high_resolution_clock::now();
    bubble.bubbleSort(largeArr, largeSize);
    auto stop36 = high_resolution_clock::now();
    cout << "Time taken for average case bubble sort on large array: " << duration_cast<microseconds>(stop36 - start36).count() << " microseconds" << endl;

    // // print out sorted array to check bubble sort
    // printSortedArray(smallArr, smallSize, "Array after bubble sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after bubble sort: ");
    // printSortedArray(largeArr, largeSize, "Array after bubble sort: ");
    
    // END OF BUBBLE SORT FUNCTION #4 -----------------------------------------
//======================================================================================================================================================================


    // // print out unsorted array
    // printOriginalArray(smallArr, smallSize, "Original array: ");
    // printOriginalArray(mediumArr, mediumSize, "Original array: ");
    // printOriginalArray(largeArr, largeSize, "Original array: ");

//======================================================================================================================================================================
    // QUICK SORT FUNCTION #5 -------------------------------------------------
    // make an object of sort and call on quick sort class to handle sort
    Quick quick;

    // Quick Sort Best Case
    auto start37 = high_resolution_clock::now();
    quick.quickSort(smallArr, 0, smallSize - 1);
    auto stop37 = high_resolution_clock::now();
    cout << "Time taken for best case quick sort on small array: " << duration_cast<microseconds>(stop37 - start37).count() << " microseconds" << endl;
    auto start38 = high_resolution_clock::now();
    quick.quickSort(mediumArr, 0, mediumSize - 1);
    auto stop38 = high_resolution_clock::now();
    cout << "Time taken for best case quick sort on medium array: " << duration_cast<microseconds>(stop38 - start38).count() << " microseconds" << endl;
    auto start39 = high_resolution_clock::now();
    quick.quickSort(largeArr, 0, largeSize - 1);
    auto stop39 = high_resolution_clock::now();
    cout << "Time taken for best case quick sort on large array: " << duration_cast<microseconds>(stop39 - start39).count() << " microseconds" << endl;

    // // print out sorted array to check quick sort
    // printSortedArray(smallArr, smallSize, "Array after quick sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after quick sort: ");
    // printSortedArray(largeArr, largeSize, "Array after quick sort: ");

    // reOrder arrays for worst case
    reOrderWorstCase(smallArr, smallSize);
    reOrderWorstCase(mediumArr, mediumSize);
    reOrderWorstCase(largeArr, largeSize);

    // // print out worst case arrays
    // printOriginalArray(smallArr, smallSize, "Worst case array: ");
    // printOriginalArray(mediumArr, mediumSize, "Worst case array: ");
    // printOriginalArray(largeArr, largeSize, "Worst case array: ");

    // Quick Sort Worst Case
    auto start40 = high_resolution_clock::now();
    quick.quickSort(smallArr, 0, smallSize - 1);
    auto stop40 = high_resolution_clock::now();
    cout << "Time taken for worst case quick sort on small array: " << duration_cast<microseconds>(stop40 - start40).count() << " microseconds" << endl;
    auto start41 = high_resolution_clock::now();
    quick.quickSort(mediumArr, 0, mediumSize - 1);
    auto stop41 = high_resolution_clock::now();
    cout << "Time taken for worst case quick sort on medium array: " << duration_cast<microseconds>(stop41 - start41).count() << " microseconds" << endl;
    auto start42 = high_resolution_clock::now();
    quick.quickSort(largeArr, 0, largeSize - 1);
    auto stop42 = high_resolution_clock::now();
    cout << "Time taken for worst case quick sort on large array: " << duration_cast<microseconds>(stop42 - start42).count() << " microseconds" << endl;

    // // print out sorted array to check quick sort
    // printSortedArray(smallArr, smallSize, "Array after quick sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after quick sort: ");
    // printSortedArray(largeArr, largeSize, "Array after quick sort: ");

    // reOrder arrays for average case
    reOrderAvgCase(smallArr, smallSize);
    reOrderAvgCase(mediumArr, mediumSize);
    reOrderAvgCase(largeArr, largeSize);

    // // print out average case arrays
    // printOriginalArray(smallArr, smallSize, "Average case array: ");
    // printOriginalArray(mediumArr, mediumSize, "Average case array: ");
    // printOriginalArray(largeArr, largeSize, "Average case array: ");

    // Quick Sort Average Case
    auto start43 = high_resolution_clock::now();
    quick.quickSort(smallArr, 0, smallSize - 1);
    auto stop43 = high_resolution_clock::now();
    cout << "Time taken for average case quick sort on small array: " << duration_cast<microseconds>(stop43 - start43).count() << " microseconds" << endl;
    auto start44 = high_resolution_clock::now();
    quick.quickSort(mediumArr, 0, mediumSize - 1);
    auto stop44 = high_resolution_clock::now();
    cout << "Time taken for average case quick sort on medium array: " << duration_cast<microseconds>(stop44 - start44).count() << " microseconds" << endl;
    auto start45 = high_resolution_clock::now();
    quick.quickSort(largeArr, 0, largeSize - 1);
    auto stop45 = high_resolution_clock::now();
    cout << "Time taken for average case quick sort on large array: " << duration_cast<microseconds>(stop45 - start45).count() << " microseconds" << endl;

    // // print out sorted array to check quick sort
    // printSortedArray(smallArr, smallSize, "Array after quick sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after quick sort: ");
    // printSortedArray(largeArr, largeSize, "Array after quick sort: ");

    // END OF QUICK SORT FUNCTION #5 ------------------------------------------
//======================================================================================================================================================================

    // // print out unsorted array
    // printOriginalArray(smallArr, smallSize, "Original array: ");
    // printOriginalArray(mediumArr, mediumSize, "Original array: ");
    // printOriginalArray(largeArr, largeSize, "Original array: ");

//======================================================================================================================================================================
    // RADIX SORT FUNCTION #6 -------------------------------------------------
    // make an object of sort and call on radix sort class to handle sort
    Radix radix;

    // Radix Sort Best Case
    auto start46 = high_resolution_clock::now();
    radix.radixSort(smallArr, smallSize);
    auto stop46 = high_resolution_clock::now();
    cout << "Time taken for best case radix sort on small array: " << duration_cast<microseconds>(stop46 - start46).count() << " microseconds" << endl;
    auto start47 = high_resolution_clock::now();
    radix.radixSort(mediumArr, mediumSize);
    auto stop47 = high_resolution_clock::now();
    cout << "Time taken for best case radix sort on medium array: " << duration_cast<microseconds>(stop47 - start47).count() << " microseconds" << endl;
    auto start48 = high_resolution_clock::now();
    radix.radixSort(largeArr, largeSize);
    auto stop48 = high_resolution_clock::now();
    cout << "Time taken for best case radix sort on large array: " << duration_cast<microseconds>(stop48 - start48).count() << " microseconds" << endl;

    // // print out sorted array to check radix sort
    // printSortedArray(smallArr, smallSize, "Array after radix sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after radix sort: ");
    // printSortedArray(largeArr, largeSize, "Array after radix sort: ");

    // reOrder arrays for worst case
    reOrderWorstCase(smallArr, smallSize);
    reOrderWorstCase(mediumArr, mediumSize);
    reOrderWorstCase(largeArr, largeSize);

    // // print out worst case arrays
    // printOriginalArray(smallArr, smallSize, "Worst case array: ");
    // printOriginalArray(mediumArr, mediumSize, "Worst case array: ");
    // printOriginalArray(largeArr, largeSize, "Worst case array: ");

    // Radix Sort Worst Case
    auto start49 = high_resolution_clock::now();
    radix.radixSort(smallArr, smallSize);
    auto stop49 = high_resolution_clock::now();
    cout << "Time taken for worst case radix sort on small array: " << duration_cast<microseconds>(stop49 - start49).count() << " microseconds" << endl;
    auto start50 = high_resolution_clock::now();
    radix.radixSort(mediumArr, mediumSize);
    auto stop50 = high_resolution_clock::now();
    cout << "Time taken for worst case radix sort on medium array: " << duration_cast<microseconds>(stop50 - start50).count() << " microseconds" << endl;
    auto start51 = high_resolution_clock::now();
    radix.radixSort(largeArr, largeSize);
    auto stop51 = high_resolution_clock::now();
    cout << "Time taken for worst case radix sort on large array: " << duration_cast<microseconds>(stop51 - start51).count() << " microseconds" << endl;

    // // print out sorted array to check radix sort
    // printSortedArray(smallArr, smallSize, "Array after radix sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after radix sort: ");
    // printSortedArray(largeArr, largeSize, "Array after radix sort: ");

    // reOrder arrays for average case
    reOrderAvgCase(smallArr, smallSize);
    reOrderAvgCase(mediumArr, mediumSize);
    reOrderAvgCase(largeArr, largeSize);

    // // print out average case arrays
    // printOriginalArray(smallArr, smallSize, "Average case array: ");
    // printOriginalArray(mediumArr, mediumSize, "Average case array: ");
    // printOriginalArray(largeArr, largeSize, "Average case array: ");

    // Radix Sort Average Case
    auto start52 = high_resolution_clock::now();
    radix.radixSort(smallArr, smallSize);
    auto stop52 = high_resolution_clock::now();
    cout << "Time taken for average case radix sort on small array: " << duration_cast<microseconds>(stop52 - start52).count() << " microseconds" << endl;
    auto start53 = high_resolution_clock::now();
    radix.radixSort(mediumArr, mediumSize);
    auto stop53 = high_resolution_clock::now();
    cout << "Time taken for average case radix sort on medium array: " << duration_cast<microseconds>(stop53 - start53).count() << " microseconds" << endl;
    auto start54 = high_resolution_clock::now();
    radix.radixSort(largeArr, largeSize);
    auto stop54 = high_resolution_clock::now();
    cout << "Time taken for average case radix sort on large array: " << duration_cast<microseconds>(stop54 - start54).count() << " microseconds" << endl;

    // // print out sorted array to check radix sort
    // printSortedArray(smallArr, smallSize, "Array after radix sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after radix sort: ");
    // printSortedArray(largeArr, largeSize, "Array after radix sort: ");

    // END OF RADIX SORT FUNCTION #6 ------------------------------------------
//======================================================================================================================================================================

    // // print out unsorted array
    // printOriginalArray(smallArr, smallSize, "Original array: ");
    // printOriginalArray(mediumArr, mediumSize, "Original array: ");
    // printOriginalArray(largeArr, largeSize, "Original array: ");

//======================================================================================================================================================================
    // HEAP SORT FUNCTION #7 --------------------------------------------------
    // make an object of sort and call on heap sort class to handle sort
    Heap heap;

    // Heap Sort Best Case
    auto start55 = high_resolution_clock::now();
    heap.heapSort(smallArr, smallSize);
    auto stop55 = high_resolution_clock::now();
    cout << "Time taken for best case heap sort on small array: " << duration_cast<microseconds>(stop55 - start55).count() << " microseconds" << endl;
    auto start56 = high_resolution_clock::now();
    heap.heapSort(mediumArr, mediumSize);
    auto stop56 = high_resolution_clock::now();
    cout << "Time taken for best case heap sort on medium array: " << duration_cast<microseconds>(stop56 - start56).count() << " microseconds" << endl;
    auto start57 = high_resolution_clock::now();
    heap.heapSort(largeArr, largeSize);
    auto stop57 = high_resolution_clock::now();
    cout << "Time taken for best case heap sort on large array: " << duration_cast<microseconds>(stop57 - start57).count() << " microseconds" << endl;

    // // print out sorted array to check heap sort
    // printSortedArray(smallArr, smallSize, "Array after heap sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after heap sort: ");
    // printSortedArray(largeArr, largeSize, "Array after heap sort: ");

    // reOrder arrays for worst case
    reOrderWorstCase(smallArr, smallSize);
    reOrderWorstCase(mediumArr, mediumSize);
    reOrderWorstCase(largeArr, largeSize);

    // // print out worst case arrays
    // printOriginalArray(smallArr, smallSize, "Worst case array: ");
    // printOriginalArray(mediumArr, mediumSize, "Worst case array: ");
    // printOriginalArray(largeArr, largeSize, "Worst case array: ");

    // Heap Sort Worst Case
    auto start58 = high_resolution_clock::now();
    heap.heapSort(smallArr, smallSize);
    auto stop58 = high_resolution_clock::now();
    cout << "Time taken for worst case heap sort on small array: " << duration_cast<microseconds>(stop58 - start58).count() << " microseconds" << endl;
    auto start59 = high_resolution_clock::now();
    heap.heapSort(mediumArr, mediumSize);
    auto stop59 = high_resolution_clock::now();
    cout << "Time taken for worst case heap sort on medium array: " << duration_cast<microseconds>(stop59 - start59).count() << " microseconds" << endl;
    auto start60 = high_resolution_clock::now();
    heap.heapSort(largeArr, largeSize);
    auto stop60 = high_resolution_clock::now();
    cout << "Time taken for worst case heap sort on large array: " << duration_cast<microseconds>(stop60 - start60).count() << " microseconds" << endl;

    // // print out sorted array to check heap sort
    // printSortedArray(smallArr, smallSize, "Array after heap sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after heap sort: ");
    // printSortedArray(largeArr, largeSize, "Array after heap sort: ");

    // reOrder arrays for average case
    reOrderAvgCase(smallArr, smallSize);
    reOrderAvgCase(mediumArr, mediumSize);
    reOrderAvgCase(largeArr, largeSize);

    // // print out average case arrays
    // printOriginalArray(smallArr, smallSize, "Average case array: ");
    // printOriginalArray(mediumArr, mediumSize, "Average case array: ");
    // printOriginalArray(largeArr, largeSize, "Average case array: ");

    // Heap Sort Average Case
    auto start61 = high_resolution_clock::now();
    heap.heapSort(smallArr, smallSize);
    auto stop61 = high_resolution_clock::now();
    cout << "Time taken for average case heap sort on small array: " << duration_cast<microseconds>(stop61 - start61).count() << " microseconds" << endl;
    auto start62 = high_resolution_clock::now();
    heap.heapSort(mediumArr, mediumSize);
    auto stop62 = high_resolution_clock::now();
    cout << "Time taken for average case heap sort on medium array: " << duration_cast<microseconds>(stop62 - start62).count() << " microseconds" << endl;
    auto start63 = high_resolution_clock::now();
    heap.heapSort(largeArr, largeSize);
    auto stop63 = high_resolution_clock::now();
    cout << "Time taken for average case heap sort on large array: " << duration_cast<microseconds>(stop63 - start63).count() << " microseconds" << endl;

    // // print out sorted array to check heap sort
    // printSortedArray(smallArr, smallSize, "Array after heap sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after heap sort: ");
    // printSortedArray(largeArr, largeSize, "Array after heap sort: ");

    // END OF HEAP SORT FUNCTION #7 -------------------------------------------
//======================================================================================================================================================================

    // // print out unsorted array
    // printOriginalArray(smallArr, smallSize, "Original array: ");
    // printOriginalArray(mediumArr, mediumSize, "Original array: ");
    // printOriginalArray(largeArr, largeSize, "Original array: ");

//======================================================================================================================================================================
    // COUNTING SORT FUNCTION #8 ----------------------------------------------
    // make an object of sort and call on counting sort class to handle sort
    Counting counting;

    // Counting Sort Best Case
    auto start64 = high_resolution_clock::now();
    counting.countingSort(smallArr, smallSize);
    auto stop64 = high_resolution_clock::now();
    cout << "Time taken for best case counting sort on small array: " << duration_cast<microseconds>(stop64 - start64).count() << " microseconds" << endl;
    auto start65 = high_resolution_clock::now();
    counting.countingSort(mediumArr, mediumSize);
    auto stop65 = high_resolution_clock::now();
    cout << "Time taken for best case counting sort on medium array: " << duration_cast<microseconds>(stop65 - start65).count() << " microseconds" << endl;
    auto start66 = high_resolution_clock::now();
    counting.countingSort(largeArr, largeSize);
    auto stop66 = high_resolution_clock::now();
    cout << "Time taken for best case counting sort on large array: " << duration_cast<microseconds>(stop66 - start66).count() << " microseconds" << endl;
    
    // // print out sorted array to check counting sort
    // printSortedArray(smallArr, smallSize, "Array after counting sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after counting sort: ");
    // printSortedArray(largeArr, largeSize, "Array after counting sort: ");

    // reOrder arrays for worst case
    reOrderWorstCase(smallArr, smallSize);
    reOrderWorstCase(mediumArr, mediumSize);
    reOrderWorstCase(largeArr, largeSize);

    // // print out worst case arrays
    // printOriginalArray(smallArr, smallSize, "Worst case array: ");
    // printOriginalArray(mediumArr, mediumSize, "Worst case array: ");
    // printOriginalArray(largeArr, largeSize, "Worst case array: ");

    // Counting Sort Worst Case
    auto start67 = high_resolution_clock::now();
    counting.countingSort(smallArr, smallSize);
    auto stop67 = high_resolution_clock::now();
    cout << "Time taken for worst case counting sort on small array: " << duration_cast<microseconds>(stop67 - start67).count() << " microseconds" << endl;
    auto start68 = high_resolution_clock::now();
    counting.countingSort(mediumArr, mediumSize);
    auto stop68 = high_resolution_clock::now();
    cout << "Time taken for worst case counting sort on medium array: " << duration_cast<microseconds>(stop68 - start68).count() << " microseconds" << endl;
    auto start69 = high_resolution_clock::now();
    counting.countingSort(largeArr, largeSize);
    auto stop69 = high_resolution_clock::now();
    cout << "Time taken for worst case counting sort on large array: " << duration_cast<microseconds>(stop69 - start69).count() << " microseconds" << endl;

    // // print out sorted array to check counting sort
    // printSortedArray(smallArr, smallSize, "Array after counting sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after counting sort: ");
    // printSortedArray(largeArr, largeSize, "Array after counting sort: ");

    // reOrder arrays for average case
    reOrderAvgCase(smallArr, smallSize);
    reOrderAvgCase(mediumArr, mediumSize);
    reOrderAvgCase(largeArr, largeSize);

    // // print out average case arrays
    // printOriginalArray(smallArr, smallSize, "Average case array: ");
    // printOriginalArray(mediumArr, mediumSize, "Average case array: ");
    // printOriginalArray(largeArr, largeSize, "Average case array: ");

    // Counting Sort Average Case
    auto start70 = high_resolution_clock::now();
    counting.countingSort(smallArr, smallSize);
    auto stop70 = high_resolution_clock::now();
    cout << "Time taken for average case counting sort on small array: " << duration_cast<microseconds>(stop70 - start70).count() << " microseconds" << endl;
    auto start71 = high_resolution_clock::now();
    counting.countingSort(mediumArr, mediumSize);
    auto stop71 = high_resolution_clock::now();
    cout << "Time taken for average case counting sort on medium array: " << duration_cast<microseconds>(stop71 - start71).count() << " microseconds" << endl;
    auto start72 = high_resolution_clock::now();
    counting.countingSort(largeArr, largeSize);
    auto stop72 = high_resolution_clock::now();
    cout << "Time taken for average case counting sort on large array: " << duration_cast<microseconds>(stop72 - start72).count() << " microseconds" << endl;

    // // print out sorted array to check counting sort
    // printSortedArray(smallArr, smallSize, "Array after counting sort: ");
    // printSortedArray(mediumArr, mediumSize, "Array after counting sort: ");
    // printSortedArray(largeArr, largeSize, "Array after counting sort: ");
    
    // END OF COUNTING SORT FUNCTION #8 ---------------------------------------
//======================================================================================================================================================================
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


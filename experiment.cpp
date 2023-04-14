// file that runs algorithms from header files

#include <iostream>
using namespace std;

// include header files for all the sorts/algorithms
#include "insertion.h"
#include "selection.h"
#include "bubble.h"
#include "merge.h"
#include "quicksort.h"
#include "heapsort.h"
#include "countingsort.h"
#include "radixsort.h"

// main function
int main() {

    // create an array with 10 elements
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    // get size of array
    int size = sizeof(arr)/sizeof(arr[0]);

    // call insertion sort function with array and size and array passed by reference
    insertionSort(arr, size);
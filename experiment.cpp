#include <iostream>

using namespace std;


// function prototype for sorting algorithms
void selectionSort(int arr[], int size);

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
    cout << endl << endl;

    // SELECTION SORT FUNCTION #1 ---------------------------------------------
    selectionSort(arr, size);

    // print out sorted array to check selection sort
    cout << "Array after selection sort: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // call function that creates original unsorted array
    createOriginalArray(arr, size);

    // print original array
    cout << "\nOriginal array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// function for returning original unsorted array
void createOriginalArray(int arr[], int size) {
    int originalArr[10] = {0};

    for (int i = 0; i < size; i++) {
        originalArr[i] = arr[i];
    }
}

// SELECTION SORT ALGORITHM #1 -------------------------------------------------
void selectionSort(int arr[], int size) {
    int i, j, indexSmallest, temp = 0;

    for (i = 0; i < size - 1; i++) {
        indexSmallest = i;

        for (j = i + 1; j < size; j++) {

            if (arr[j] < arr[indexSmallest]) {
                indexSmallest = j;
            }
        }

        // swap function
        temp = arr[i];
        arr[i] = arr[indexSmallest];
        arr[indexSmallest] = temp;
    }
}


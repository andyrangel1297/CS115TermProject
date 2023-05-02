#include <iostream>

using namespace std;

#include "bubble.h"

// bubble sort function
void Bubble::bubbleSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        
        // pass through arra to check bubbles
        for (int j = size - 1; j > i; j--) {
            
            // compare adjacent elements
            if (arr[j] < arr[j - 1]) {
                
                // swap function
                swap(arr[j], arr[j - 1]);
            }
        }
    }
}
               


// private helper function to swap elements
void Bubble::swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
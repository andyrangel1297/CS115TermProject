#ifndef HEAP_H
#define HEAP_H

class Heap {
    public:
        void heapSort(int arr[], int size);
        void heapify(int arr[], int size, int i);
        void swap(int &a, int &b);
};

#endif
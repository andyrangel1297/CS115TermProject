#ifndef BUBBLE_H
#define BUBBLE_H

class Bubble {
    public:
        void bubbleSort(int arr[], int size);

    private:
        void swap(int& a, int& b);
};

#endif
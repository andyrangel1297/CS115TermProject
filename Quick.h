#ifndef QUICK_H
#define QUICK_H

class Quick {
    public:
        void quickSort(int arr[], int start, int end);

    private:
        int partition(int A[], int low, int high);
};

#endif
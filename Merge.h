#ifndef MERGE_H
#define MERGE_H

class Merge {
    public:
        void mergeSort(int arr[], int left, int right);

    private:
    void merge(int arr[], int left, int mid, int right);
};

#endif
#include <iostream>
using namespace std;

bool findPairBrute(int arr[], int n, int x);
bool findPairEfficient(int arr[], int n, int x);
void countingSort(int arr[], int size);

int main(void) {

	const int n = 6;
	int a[n] = { 3, 1, 1, 13, 7, 5 };
	countingSort(a, n);

	int x = 10;

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	} cout << endl;

	cout << "\nBrute Force: ";
	if (findPairBrute(a, n, x) == true) {
		cout << "Pair found" << endl;
	}
	else {
		cout << "Pair not found" << endl;
	}
	
	cout << "Efficient: ";
	if (findPairEfficient(a, n, x) == true) {
		cout << "Pair found" << endl;
	}
	else {
		cout << "Pair not found" << endl;
	}

	return 0;
}

bool findPairBrute(int arr[], int n, int x) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] + arr[j] == x) {
				return true;
			}
		}
	}
	return false;
}

bool findPairEfficient(int arr[], int n, int x) {

	int low = 0;
	int high = n - 1;
	int sum = 0;

	while (low != high) {
		sum = arr[low] + arr[high];
		if (sum > x) {
			high--;
		}
		else if (sum < x) {
			low++;
		}
		else {
			return true;
		}

	}
	return false;
}

void countingSort(int arr[], int size) {
    // find max element in array
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // create count array
    int* count = new int[max + 1];
    for (int i = 0; i < max + 1; i++) {
        count[i] = 0;
    }

    // store count of each element
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    // change count[i] so that count[i] now contains actual position of element
    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }

    // create output array
    int* output = new int[size];

    // build output array
    for (int i = size - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // copy output array to original array
    for (int i = 0; i < size; i++) {
        arr[i] = output[i];
    }

    // delete dynamic arrays
    delete[] count;
    delete[] output;
}

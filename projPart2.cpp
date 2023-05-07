#include <iostream>
using namespace std;

bool findPairBrute(int arr[], int n, int x);
bool findPairEfficient(int arr[], int n, int x);
void bubbleSort(int arr[], int n);
void swap(int& a, int& b);

int main(void) {

	const int n = 6;
	int a[n] = { 3, 1, 1, 13, 7, 5 };
	bubbleSort(a, n);

	int x = 10;

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	} cout << "\n" << endl;

	if (findPairBrute(a, n, x) == true) {
		cout << "Pair found" << endl;
	}
	else {
		cout << "Pair not found" << endl;
	}
	
	if (findPairEfficient(a, n, x) == true) {
		cout << "Pair found" << endl;
	}
	else {
		cout << "Pair not found" << endl;
	}

	return 0;
}

bool findPairBrute(int arr[], int n, int x) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j != i && arr[i] + arr[j] == x) {
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

void bubbleSort(int arr[], int n) {

	for (int i = 0; i < n; i++) {
		//pass n times to check bubbles
		for (int j = n - 1; j > i; j--) {
			//compare adjacent elements
			if (arr[j] < arr[j - 1]) {
				swap(arr[j], arr[j - 1]);
			}
		}
	}
}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

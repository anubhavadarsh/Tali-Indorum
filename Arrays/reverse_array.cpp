#include <iostream>

using namespace std;

/**
 * @param arr 
 * @param n 
 * @return int 
 */
int* reverseArray(int *arr, int n) {
	int low = 0, high = n-1;

	for(; low < high; ++low,--high) {
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
	}

	return arr;
}


int main() {
	int arr[] = {10,5,7,3};

	int n = sizeof(arr)/sizeof(arr[0]);

	int *arr2 = reverseArray(arr, n);

	for(int i = 0; i < n; ++i) {
		cout<<arr[i]<< ' ';
	}
	return 0;
}

/**
 * T(n): O(n)
 * Auxiliary Space: O(1)
 * 
 */
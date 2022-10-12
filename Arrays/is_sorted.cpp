#include <iostream>

using namespace std;

/**
 * @param arr 
 * @param n 
 * @return int 
 */
bool isSorted(int *arr, int n) {
	for(int i = 0; i < n-1; ++i) {
		if(arr[i] > arr[i+1]) return false;
	}

	return true;
}


int main() {
	int arr[] = {100,20,200};

	int n = sizeof(arr)/sizeof(arr[0]);

	cout<<isSorted(arr, n);


	return 0;
}

/**
 * T(n): O(n)
 * Auxiliary Space: O(1)
 * 
 */
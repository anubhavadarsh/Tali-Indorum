#include <iostream>

using namespace std;

/**
 * @brief remove distinct elements from
 * the given array.
 * here, we know that first elem will be unique
 * so start with second elem, if the current elem
 * is different than the last elem in array then add
 * the elem in array and increase size by 1
 * 
 * @param arr 
 * @param n 
 * @return int 
 */
int removeDuplicates(int arr[],int n) {
	int res = 1;
	for(int i = 1; i < n; ++i) {
		if(arr[i] != arr[res-1]) {
			arr[res] = arr[i];
			++res;
		}
	}

	return res;
}


int main() {
	int arr[] = {10,5,7,3};

	int n = sizeof(arr)/sizeof(arr[0]);

	cout<<removeDuplicates(arr, n);

	return 0;
}

/**
 * T(n): O(n)
 * Auxiliary Space: O(1)
 * 
 */
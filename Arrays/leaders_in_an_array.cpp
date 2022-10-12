#include <iostream>

using namespace std;

/**
 * @param arr 
 * @param n 
 * @return int 
 */
void leadersInArray(int arr[],int n) {
	for(int i = 0; i < n; ++i) {
		bool isLeader = true;
		for(int j = i+1; j < n; ++j) {
			if(arr[i] <= arr[j]) {
				isLeader = false;
				break;
			}
		}

		if(isLeader) cout<<arr[i]<<' ';
	}
}

/**
 * @brief T(n): O(n)
 * 				Auxiliary Space: O(1)
 * 
 * @param arr 
 * @param n 
 */
void leadersInArray2(int arr[], int n) {
	int currLargestIndex = n-1;
	cout<<arr[currLargestIndex]<<' ';
	for(int i = n-2; i >= 0; --i) {
		if(arr[i] > arr[currLargestIndex]) {
			cout<<arr[i]<< ' '; currLargestIndex = i;
		}
	}
}

int main() {
	int arr[] = {7,10,4,10,6,5,2};

	int n = sizeof(arr)/sizeof(arr[0]);

	leadersInArray2(arr, n);

	return 0;
}

/**
 * T(n): O(n)
 * Auxiliary Space: O(1)
 * 
 */
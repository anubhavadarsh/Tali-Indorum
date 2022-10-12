#include <iostream>

using namespace std;

/**
 * @brief 
 * arr[i] > arr[largest]: res = largest; largest = i;
 * arr[i] == arr[largest]: ignore
 * arr[i] < arr[largest] -> res == -1: res = i;
 * 													arr[i] < arr[res]: ignore;
 * 													arr[i] > arr[res]: res = i;
 * 
 * @param arr 
 * @param n 
 * @return int 
 */
int secondLargestElem(int *arr, int n) {
	int largestElIndex = 0;
	int secondLargestElIndex = -1;

	for(int i = 1; i < n; ++i) {
		if(arr[i] > arr[largestElIndex]) {
			secondLargestElIndex = largestElIndex;
			largestElIndex = i;
		}
		else if(arr[i] != arr[largestElIndex]) {
			if(secondLargestElIndex == -1 || arr[i] > arr[secondLargestElIndex]) {
				secondLargestElIndex = i;
			}
		}

	}

	return secondLargestElIndex;
}


int main() {
	int arr[] = {2,-23,-43,95,-53,10,-1};

	int n = sizeof(arr)/sizeof(arr[0]);

	cout<<secondLargestElem(arr, n);


	return 0;
}

/**
 * T(n): O(n)
 * Auxiliary Space: O(1)
 * 
 */
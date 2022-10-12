#include <iostream>

using namespace std;

int largestElem(int *arr, int n) {
	int indexLargestTillNow = 0;
	for(int i = 1; i < n; ++i) {
		if(arr[indexLargestTillNow] <= arr[i]) {
			indexLargestTillNow = i;
		}
	}

	return indexLargestTillNow;
}

int main() {
	int arr[] = {-1,-23,-43,-95,-53,0,-12};

	int n = sizeof(arr)/sizeof(arr[0]);

	cout<<largestElem(arr, n);


	return 0;
}

/**
 * T(n) = O(n)
 * Auxiliary Space = O(1)
 */
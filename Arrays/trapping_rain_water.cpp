#include <iostream>

using namespace std;

int getWater(int arr[], int n) {

	int res = 0;
	int *lmax = new int[n];
	int *rmax = new int[n]; 

	lmax[0] = arr[0];
	for(int i = 1; i < n; ++i) {
		lmax[i] = max(arr[i], lmax[i-1]);
	}

	rmax[n-1] = arr[n-1];
	for(int i = n-2; i > 0; --i) {
		rmax[i] = max(arr[i], rmax[i+1]);
	}

	for(int i = 1; i < n-1; ++i) {
		res = res + (min(lmax[i],rmax[i]) - arr[i]);
	}

	return res;
}

int main() {
	int arr[] = {3,0,1,2,5};

	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<getWater(arr, n);
}
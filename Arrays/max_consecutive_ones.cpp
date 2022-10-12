#include <iostream>

using namespace std;

int maxSumSubarrs(int arr[], int n) {
	int res = arr[0];
	for(int i = 0; i < n; ++i) {
		int sum = 0;

		for(int j = i; j < n; ++j) {
			sum = sum + arr[j];
			res = max(res, sum);
		}
	}

	return res;
}

int main() {
	int arr[] = {1,-2, 3,-1,2};

	int n = sizeof(arr)/sizeof(arr[0]);

	cout<<maxSumSubarrs(arr, n);

	return 0;
}
#include <iostream>

using namespace std;

/**
 * @brief
 *  Kadane's algorithm
 * @param arr
 * @param n
 * @return int
 */
int maxSum(int arr[], int n)
{
	int res = arr[0];
	int maxTillNow = res;
	for (int i = 1; i < n; ++i)
	{
		res = max(res + arr[i], arr[i]);
		maxTillNow = max(maxTillNow, res);
	}

	return maxTillNow;
}

int main()
{
	int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

	int n = sizeof(arr) / sizeof(arr[0]);

	cout << maxSum(arr, n);

	return 0;
}
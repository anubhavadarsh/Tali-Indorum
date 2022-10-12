#include <iostream>

using namespace std;

int maxDifference(int *arr, int n)
{
	int maxDiff = arr[1] - arr[0];

	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			maxDiff = max(maxDiff, arr[j] - arr[i]);
		}
	}

	return maxDiff;
}

/**
 * @brief max difference in an array [2, 3, 10, 6, 4, 8, 1]
 * = 8, we get by arr[j] - arr[i]; j > i;
 *
 * we need to maintain a current minimum and then
 * substract it with current iterating element
 * if it is greater than the existing result then
 * set the new result
 *
 * @param arr
 * @param n
 * @return int
 */
int maxDifference2(int *arr, int n)
{
	int maxDiff = arr[1] - arr[0];
	int currMin = arr[0];
	for (int i = 0; i < n; ++i)
	{
		maxDiff = max(maxDiff, arr[i] - currMin);
		currMin = min(currMin, arr[i]);
	}
}

int main()
{
	int arr[] = {2, 3, 10, 6, 4, 8, 1};

	int n = sizeof(arr) / sizeof(arr[0]);

	cout << maxDifference(arr, n);

	return 0;
}

/**
 * T(n): O(n)
 * Auxiliary Space: O(1)
 *
 */
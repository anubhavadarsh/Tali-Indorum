#include <iostream>

using namespace std;

/**
 * @brief given an array [10, 0, 20, 30, 0, 0, 1]
 * we have to move all the zeros to the end of the array.
 * [10, 20, 30, 1, 0, 0, 0]
 *
 * The approach is straight forward we keep track of all
 * non-zero elements index.
 * when we encounter a non zero number we swap it with index + 1.
 *
 * @param arr
 * @param n
 * @return int *
 */
int *moveZerosToEnd(int arr[], int n)
{
	int index = 0;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] != 0)
		{
			swap(arr[i], arr[index]);
			++index;
		}
	}

	return arr;
}

int main()
{
	int arr[] = {10, 0, 0, 20};

	int n = sizeof(arr) / sizeof(arr[0]);

	int *arr2 = moveZerosToEnd(arr, n);

	for (int i = 0; i < n; ++i)
	{
		cout << arr2[i] << ' ';
	}

	return 0;
}

/**
 * T(n): O(n)
 * Auxiliary Space: O(1)
 *
 */
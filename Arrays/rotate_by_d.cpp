#include <iostream>

using namespace std;

/**
 * @brief rotate a array [1,2,3,4,5] by d;
 * let's say d = 2;
 * then array = [3,4,5,1,2]
 *
 * in order to rotate an array we
 * reverse the one half of the array (0, d - 1)
 * then the rest half (d, n - 1)
 * then reverse entire array (0, n - 1)
 *
 * @param arr
 * @param n
 * @return int
 */

void reverse(int arr[], int low, int high)
{
	for (; low < high; ++low, --high)
	{
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
	}
}

void leftRotateByD(int arr[], int n, int D)
{
	reverse(arr, 0, D - 1);
	reverse(arr, D, n - 1);
	reverse(arr, 0, n - 1);
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};

	int n = sizeof(arr) / sizeof(arr[0]);

	leftRotateByD(arr, n, 2);

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}

/**
 * T(n): O(n)
 * Auxiliary Space: O(1)
 *
 */
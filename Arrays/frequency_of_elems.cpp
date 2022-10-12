#include <iostream>

using namespace std;

void frequencyOfElems(int *arr, int n)
{
	int count = 1;
	for (int i = 0; i < n - 1; ++i)
	{
		if (arr[i] == arr[i + 1])
		{
			++count;
			continue;
		}

		cout << arr[i] << ' ' << count << '\n';
		count = 1;
	}

	cout << arr[n - 1] << ' ' << count << '\n';
}

int main()
{
	int arr[] = {10, 20, 30};

	int n = sizeof(arr) / sizeof(arr[0]);

	frequencyOfElems(arr, n);

	return 0;
}

/**
 * T(n): O(n)
 * Auxiliary Space: O(1)
 *
 */
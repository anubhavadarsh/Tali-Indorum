#include <iostream>

using namespace std;

int maxProfit(int *arr, int n)
{
	int boughtAt = arr[0];
	int total = 0;
	int currProfit = 0;
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] - boughtAt > currProfit)
		{
			currProfit = arr[i] - boughtAt;
			continue;
		}

		total += currProfit;
		currProfit = 0;
		boughtAt = arr[i];
	}

	if (currProfit > 0)
		total += currProfit;

	return total;
}

int main()
{
	int arr[] = {2, 0, 2};

	cout << maxProfit(arr, 3);

	return 0;
}
#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief maximum circular subarray sum
 * for a given array = [10, 5, -5] the subarrays are
 *  10   10,5   10,5,-5
 *  5    5,-5   5,-5,10
 * -5   -5,10  -5,10,5
 *
 * there are n subarrays starting with the same index.
 *
 * @param vec
 * @return int
 */
int maxSum(vector<int> vec)
{
	int n = vec.size();
	int res = vec[0];
	for (int i = 0; i < n; ++i)
	{

		int currSum = vec[i];
		res = max(currSum, res); // check if current element is maximum
		for (int j = 1; j < n; ++i)
		{
			int idx = (i + j) % n; // get the next index in circular manner
			currSum += vec[idx];
			res = max(res, currSum);
		}
	}

	return res;
}
/*
T(n):  O(n);
space: O(1);
*/

int main()
{
	return 0;
}

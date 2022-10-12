#include <iostream>
#include <vector>

using namespace std;
/**
 * @brief [2, 3, -4, 1, 23, 9, 2];
 *         ^      ^
 *         i      j
 * using the sum for k element we can calculate
 * the next sum by subtrating arr[k - 1] and adding arr[k]
 * to previous sum;
 * @param vec
 * @param k
 * @return int
 */
int solution(vector<int> vec, int k)
{
	int n = vec.size();

	int sum = 0;
	for (int i = 0; i < k; ++i)
	{
		sum += vec[i];
	}

	int maxSum = sum;
	for (int i = k; i < n; ++i)
	{
		sum += vec[i] - vec[k - i];
		maxSum = max(maxSum, sum);
	}
}

int main()
{
	vector<int> vec = {-5, -10, 6, 90, 3};

	return 0;
}
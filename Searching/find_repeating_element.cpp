#include <bits/stdc++.h>

using namespace std;

/**
 * @brief
 * Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
 * There is only one repeated number in nums, return this repeated number.
 *
 * You must solve the problem without modifying the array nums and uses only constant extra space.
 * Example 1:
 * Input: nums = [1,3,4,2,2]
 * Output: 2
 *
 * Example 2:
 * Input: nums = [3,1,3,4,2]
 * Output: 3
 *
 * @param v
 * @return int
 */
int findDuplicate(vector<int> &v)
{
	int slow = v[0], fast = v[0];
	do
	{
		slow = v[slow];
		fast = v[v[fast]];
	} while (slow != fast);

	slow = v[0];
	while (slow != fast)
	{
		slow = v[slow];
		fast = v[fast];
	}

	return slow;
}

/**
 * Solution: https://leetcode.com/problems/find-the-duplicate-number/solution/
 * Practice: https://leetcode.com/problems/find-the-duplicate-number/
 *
 */

int main()
{
	vector<int> v = {7, 2, 1, 3, 5, 4, 6, 2};

	cout << findDuplicate(v) << '\n';

	return 0;
}
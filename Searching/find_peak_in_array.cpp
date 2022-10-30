#include <iostream>
#include <vector>

using namespace std;

/**
 * description:
 * A peak element is an element that is strictly greater than its neighbors.
 * Given a 0-indexed integer array nums, find a peak element, and return its index.
 * If the array contains multiple peaks, return the index to any of the peaks.
 * You may imagine that nums[-1] = nums[n] = -∞.
 * In other words, an element is always considered to be strictly greater
 * than a neighbor that is outside the array.
 * You must write an algorithm that runs in O(log n) time.
 */

int findPeakElement(vector<int> &v)
{
	int low = 0, high = v.size() - 1;
	while (low < high)
	{
		int mid = low + (high - low) / 2;
		if (v[mid] > v[mid + 1])
		{
			high = mid;
		}
		else
		{
			low = mid + 1
		}
	}

	return low;
}
/**
 * solution: https://youtu.be/HtSuA80QTyo?t=1648
 * question: https://leetcode.com/problems/find-peak-element/
 *
 */

int main()
{

	vector<int> v = {1, 2, 3, 1};
	cout << findPeakElement(v) << '\n';

	return 0;
}
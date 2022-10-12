#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief an element is majority that exists more that n/2 times
 * in an array where n is the size of the array.
 * we use Moore's voting algorithm to solve this.
 * it is based on the assumption that if there is a majority
 * element then it might exist in group.
 *
 * @param vec
 * @return int
 */
int findMajority(vector<int> vec)
{
	int res = 0, count = 1;
	for (int i = 1; i < vec.size(); ++i)
	{
		if (vec[res] == vec[i])
			++count;
		else
		{
			--count;
		}
		if (count == 0)
			res = i;
	}

	count = 0;
	for (int i = 0; i < vec.size(); ++i)
	{
		if (vec[res] == vec[i])
			++count;

		if (count > vec.size() / 2)
			return i;
	}

	return -1;
}
/*
T(n): O(1)
space: O(1)
*/

int main()
{
	return 0;
}
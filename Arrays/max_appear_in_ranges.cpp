#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

/**
 * @brief calculate number with max occurance within the given range
 *
 * @param l
 * @param r
 * @param n
 * @return int
 */
int maximumInRanges(int l[], int r[], int n)
{
	/**
	 * assumption that 0 <= l[i], r[i] < 1000;
	 */
	vector<int> v(1000);

	/**
	 * increase the index for l by 1, this mark the start of range
	 * decrease the index for r+1 by 1, this mark the end of range.
	 */
	for (int i = 0; i < n; ++i)
	{
		v[l[i]] += 1;
		v[r[i] + 1] -= 1;
	}

	/**
	 * here, prefix sum allows us to mark every element within the range.
	 * if it appears more than one range it will that number will have more count,
	 * decrease by -1 make sure we stop counting any element after the given range.
	 */
	int maximum = v[0], res = 0;
	for (int i = 1; i < 1000; ++i)
	{
		v[i] += v[i - 1];

		if (maximum < v[i])
		{
			maximum = v[i];
			res = i;
		}
	}

	return maximum;
}

int main()
{

	int l[] = {1, 2, 3};
	int r[] = {3, 5, 7};

	cout << maximumInRanges(l, r, 3);

	return 0;
}
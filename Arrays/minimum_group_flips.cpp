#include <iostream>
#include <vector>

using namespace std;

void naiveSolution(vector<int> vec)
{
	int groupsOf0 = vec[0] == 0 ? 1 : 0;
	int groupsOf1 = vec[0] == 1 ? 1 : 0;

	for (int i = 0; i < vec.size() - 1; ++i)
	{
		if (vec[i] == vec[i + 1])
			continue;

		if (vec[i + 1] == 0)
			++groupsOf0;
		else
		{
			++groupsOf1;
		}
	}

	int minGrpBit = groupsOf0 < groupsOf1 ? 0 : 1;
	int count = 0;
	for (int i = 0; i < vec.size(); ++i)
	{
		if (vec[i] == minGrpBit)
		{
			++count;
			if (count == 1)
			{
				cout << "From " << i << " to ";
			}
		}
		else
		{
			if (count > 0)
			{
				cout << i - 1 << '\n';
			}
		}
	}

	if (vec.back() == minGrpBit)
	{
		cout << vec.size() - 1 << '\n';
	}
}
/*
T(n): O(2n);
space: O(1);
*/

/**
 * @brief another approach will be
 * to start with the second different group.
 *
 * @param vec
 * @return int
 */
void efficientSol(vector<int> vec)
{
	for (int i = 1; i < vec.size() - 1; ++i)
	{
		if (vec[i] != vec[i - 1])
		{
			if (vec[i] != vec[0])
			{
				cout << "From " << i << " to ";
			}
			else
			{
				cout << i - 1 << "\n";
			}
		}
	}

	if (vec.back() != vec[0])
	{
		cout << vec.size() - 1 << "\n";
	}
}
/*
T(n): O(n);
space: O(1);
*/

int main()
{
	vector<int> vec = {1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0};

	return 0;
}
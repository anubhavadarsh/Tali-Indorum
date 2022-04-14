#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief finds 2 numbers that appears odd times in an array.
 * 
 * @param v 
 */
void oddAppearing(vector<int>& v) {
	/**
	 * xor of 2 numbers will have bits that differ.
	 * so we turn off all the bits except the rightmost bit.
	 * divide the array in two half one with that bit set and other not.
	 */
	int XOR{ 0 }, res1{ 0 }, res2{ 0 };
	for (auto i : v) XOR ^= i;

	int sn = XOR & ~(XOR - 1); //only have the last bit set.

	for (auto i : v) {
		if (i & sn) { //check if a number has that bit set.
			res1 ^= i;
			continue;
		}

		res2 ^= i;
	}

	cout << res1 << ' ' << res2;
}

int main() {
	vector<int> v{ 3,4,3,4,8,4,4,32,7,7 };
	oddAppearing(v);
	return 0;
}

/**
 * T(n): O(n)
 * auxiliary space: O(1)
 * 
 */
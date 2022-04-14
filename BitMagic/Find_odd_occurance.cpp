#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief find the number in the array that occur odd times.
 * 
 * @param v 
 * @return int 
 */
int findOddOcc(vector<int> &v) {
	/**
	 * xor concept is used.
	 * 3 ^ 0 = 3
	 * 3 ^ 3 = 0 
	 * if a number appears odd times then with xor operator we can grab
	 * that easily since all the even appearance will cancel out.
	 */
	int res = 0;
	for(auto i: v) {
		res ^= i;
	}

	return res;
}

/**
 * @brief find the missing number from an array if every element is unique.
 * 
 * @param v 
 * @return int 
 */
int findMissElem(vector<int>& v) {
	/**
	 * a result is created with xor of numbers from
	 * 1 to size(arr) + 1,
	 * this is then xor-ed with all the elements of the
	 * array, by logic only one element is left in res
	 * while other is cancelled out.
	 */
	int res = 0;
	for (int i = 1; i <= size(v) + 1; ++i) {
		res ^= i;
	}

	for (auto i : v) {
		res ^= i;
	}

	return res;
}

int main() {
	vector<int> v{2,3,4,2,3,4,3};
	vector<int> v1{1,3,4,5,6,7,8};
	cout<<findOddOcc(v);
	cout<<findMissElem(v1);
	return 0;
}
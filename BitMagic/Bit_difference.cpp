#include <iostream>

using namespace std;

class Solution {
public:
	/**
	 * @brief calculate the number of bits to be flipped to convert a to b;
	 * 
	 * @param a 
	 * @param b 
	 * @return int 
	 */
	int countBitsFlip(int a, int b) {
		int XOR = a ^ b;
		int count = 0;
		while (XOR) {
			XOR &= (XOR - 1);

			++count;
		};

		return count;
	}
};

int main() {

	Solution obj;
	cout << obj.countBitsFlip(20, 25);
	return 0;
}
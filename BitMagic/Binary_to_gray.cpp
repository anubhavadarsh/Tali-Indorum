#include <iostream>

using namespace std;

/**
 * @brief return decimal form of binary representation of a number in gray.
 * 
 * @param n 
 * @return int 
 */
int binaryToGray(int n) {
		/**
		 * 1001
		 * ^
		 * 0100 (right shift by one.)
		 * 
		 */
		return n ^ (n >> 1);
}

int main() {
	cout<<binaryToGray(3);
	return 0;
}

/**
 * T(n): O(1)
 * Auxiliary space: O(1)
 * 
 */
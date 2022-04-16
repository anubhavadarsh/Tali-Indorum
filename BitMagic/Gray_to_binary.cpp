#include <iostream>

using namespace std;

/**
 * @brief return decimal form of binary representation of a number in gray.
 * 
 * @param n 
 * @return int 
 */
int grayToBinary(int n) {
		/**
		 * in gray to Binary, the msb remains the same while 
		 * the next number is xor of all it's previous consecutive numbers.
		 * g0g1g2 = b0b1b2
		 * then,
		 * b0 = g0
		 * b1 = g0 ^ g1
		 * b2 = g0 ^ g1 ^ g2
		 */
		int nCpy = n;
		while(nCpy) {
			nCpy >>= 1;
			n = n ^ nCpy;
		}

		return n;
}

int main() {
	cout<<grayToBinary(3);
	return 0;
}

/**
 * T(n): O(log(n))
 * Auxiliary space: O(1)
 * 
 */
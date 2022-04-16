#include <iostream>

using namespace std;

/**
 * @brief swap the even bits of a number with it's odd bits.
 * 
 * @param n 
 * @return int 
 */
int swapBits(int n) {
	/**
	 * traverse through all even bits of a number and exchange ith bit with i+1th bit.
	 * 
	 */
	for(int i = 0; i < 32; i+=2) {
		int i_bit = (n >> i) & 1;
		int i_1_bit = (n >> (i+1)) & 1;

		n = n - (i_bit << i)
				- (i_1_bit << (i+1))
				+ (i_bit << (i+1))
				+ (i_1_bit << i);
	}

	return n;
}

/**
 * @brief swap the even bits of a number with it's odd bits.
 * 
 * @param n 
 * @return int 
 */
int swapBits2(int n) {
	int even_bits = 0xAAAAAAA & n;
	int odd_bits = 0x5555555 & n;

	even_bits >>= 1;
	odd_bits <<= 1;
	return even_bits | odd_bits;
}
/**
 * T(n): O(constant)
 * auxiliary space: O(1)
 */

int main() {
	cout<<swapBits(2);
	cout<<swapBits2(2);
	return 0;
}
/**
 * T(n): O(1)
 * auxiliary space: O(1)
 */
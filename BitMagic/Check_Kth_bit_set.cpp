#include <iostream>

using namespace std;

/**
 * @brief check if the Kth bit is set for the given number
 * 
 * @param n an integer 
 * @param k position to check
 * @return true
 * @return false
 */
bool checkKthBit(int n, int k) {
	/**
	 * returns a non-negative integer when n and with 1 left-shift to k-1 posn.
	 * n=3, k=2
	 * 0000..011
	 * &
	 * 0000..010
	 * =
	 * 0000..010 
	 */
	return (n & (1 << (k-1))) != 0;
}

int main() {
	cout<<boolalpha<<checkKthBit(3,2)<<'\n';
	return 0;
}
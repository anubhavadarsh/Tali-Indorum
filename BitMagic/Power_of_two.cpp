#include <iostream>

using namespace std;

/**
 * @brief check if the given number is a power of two or not using
 * brian kernighan algorithm
 * 
 * @param n 
 * @return true 
 * @return false 
 */
bool isPowerOfTwo(int n) {
	/**
	 * if a number is power of 2 then it will have only
	 * one set bit, with brain kernighan algo we can unset
	 * the only bit and if the value is zero then it is a power of two
	 * but first check if n is not equal to zero because bitwise & with
	 * neg number is undefined.
	 */
	return (n != 0) && (n & (n - 1) == 0);
}

int main() {
	return 0;
}
#include <iostream>

using namespace std;

/**
 * @brief if a number has no two consecutive bits it is called sparse. 
 * 
 * @param n 
 * @return true 
 * @return false 
 */
bool isSparse(int n) {
	/**
	 * if n is & with n << 1, and it has two consecutive bits then it will return an positive number.
	 */
	return (n & n << 1) == 0;
}

int main() {
	cout<<isSparse(3);
	return 0;
}

/**
 * T(n): O(1)
 * Auxiliary space: O(1)
 * 
 */
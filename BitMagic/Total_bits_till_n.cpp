#include <iostream>

using namespace std;

/**
 * @brief returns the maximum pow of two contained in n;
 * can also use floor(log2(n)) using <cmath> lib.
 * 
 * @param n 
 * @return int 
 */
int maximumPow2(int n) {
	int m = 0;
	while(n) {
		++m;
		n >>= 1;
	}

	return m - 1;
}

/**
 * @brief counts the total set bits upto the number n
 * 
 * @param n 
 * @return int 
 */
int CountTotalBits(int n) {
	if(n == 0) return 0;

	/**
	 * first calculate the hightest power of two contained in n.
	 */
	int highestPow2 = maximumPow2(n);

	/**
	 * simple formula to calculate bits till power of 2(not inclusive).
	 * (2^x-1)*x: where x is the highest power of 2.
	 */
	int bitsTill2x = (1 << (highestPow2 - 1)) * highestPow2;
	/**
	 * calculate the individual msb bits from 2^x(inclusive) to n;
	 * there are only n - 2^x + 1 bits;
	 */
	int msbTilln = n - (1 << (highestPow2)) + 1;
	/**
	 * after calculating the msb bits of leftover we are left with n - 2^x bits to work on.
	 * use recursion to solve it.
	 */
	int rest = n - (1 << highestPow2);

	return bitsTill2x + msbTilln + CountTotalBits(rest);
}

int main() {

	cout << CountTotalBits(11);
	return 0;
}
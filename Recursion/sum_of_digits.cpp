#include <iostream>

using namespace std;

/**
 * @brief calculate the sum of digits in a number
 * 
 * @param n 
 * @param sum 
 * @return int 
 */
int func(int n, int sum) {
	if (n <= 9) return sum + n;

	return func(n / 10, sum + (n % 10));
}

int main() {
	cout << boolalpha << func(533, 0);

	return 0;
}

/**
 * T(n): O(digits in a number)
 * auxiliary space: O(digits in a number)
 * 
 */
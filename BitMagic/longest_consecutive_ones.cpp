#include <iostream>

using namespace std;

/**
 * @brief count longest consecutive ones in a number
 * 
 * @param n 
 * @return true 
 * @return false 
 */
int maxConsecutiveOnes(int n) {

	int count = 0;
	while(n) {
		n = n & (n >> 1);
		++count;
	}

	return count;
}

int main() {
	cout<<maxConsecutiveOnes(3);
	return 0;
}

/**
 * T(n): O(log(n))
 * Auxiliary space: O(1)
 * 
 */
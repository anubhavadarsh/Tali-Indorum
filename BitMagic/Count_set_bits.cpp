#include <iostream>

using namespace std;

/**
 * @brief calculate the number of set bits in a number using 
 * brian kernighan algorithm
 * 
 * @param n 
 * @return int 
 */
int countSetBits(int n) {
	int count{ 0 };
	while (n) {
		/**
		 * when n is & with n - 1 we turn get a number with it's last bit set to 0
		 * in this case we storing that in n.
		 * Loop runs number of set bits time.
		 */
		n &= (n - 1);
		++count;
	}

	return count;
}


int main() {
	cout<<countSetBits(3);

	return 0;
}
#include <iostream>

using namespace std;

/**
 * @brief convert Decimal number to it's binary representation.
 * 
 * @param n 
 * @return int 
 */
int b2ToB10(int n) {
	if(n == 0) return;
	b2ToB10(n/2);

	cout<<n%2;
}

int main() {
	b2ToB10(23);
	return 0;
}

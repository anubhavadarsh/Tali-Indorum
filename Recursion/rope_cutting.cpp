#include <iostream>

using namespace std;

/**
 * @brief calculate the maximum number of pieces that is possible
 * if the rope is cut in a, b, or c.
 * 
 * @param n 
 * @param a 
 * @param b 
 * @param c 
 * @return int 
 */
int maxPieces(int n, int a, int b, int c) {
	if(n == 0) return 0;
	if(n < 0) return -1;

/**
 * cut the ropes in a, b, and c
 * then if the value of n is 0 then
 * the cut is valid.
 * 
 */
	int x = maxPieces(n-a,a,b,c);
	int y = maxPieces(n-b,a,b,c);
	int z = maxPieces(n-c,a,b,c);

	int res = max(x, max(y, z));

	if(res == -1) return -1;

	return res + 1;
}

int main() {
	cout<<maxPieces(23,11,9,7);
	return 0;
}
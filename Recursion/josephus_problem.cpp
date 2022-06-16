#include <iostream>

using namespace std;
/**
 * @brief suppose n = 5, k = 3
 * person at index 0 will kill the person at index k-1 and pass the gun
 * to person at index k.
 * this will repeat till n = 1, then we return the position of the survivor.
 * 
 * @param n 
 * @param k 
 * @return int 
 */
int josephusProb(int n, int k) {
	//when n is equal to one there will be only
	//one survivor at index 0.
	if(n == 1) return 0;

	/**
	 * the simple problem is that whenever
	 * n is decreased the indices reset to 0,1,2...n.
	 * to prevent that we first created a relation
	 * between the current index and the index we
	 * desire and applied the expression to return value.
	 * 
	 */
	return (josephusProb(n-1, k) + k) % n;
}

int main() {
	cout<<josephusProb(5, 3);
	return 0;
}

/**
 * T(n) = theta(n)
 * 
 */
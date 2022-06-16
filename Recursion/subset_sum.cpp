#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief return the number of subsets whose summation is
 * equal to the provided sum
 * 
 * @param v 
 * @param n 
 * @param sum 
 * @return int 
 */
int subsetSum(vector<int>& v, int n, int sum) {
	if(n == 0) { //this means we have reached a subset.
		return (sum == 0 ? 1: 0); //summation of subset elements is equal to the sum.
	}

	return subsetSum(v, n-1, sum) + subsetSum(v, n-1, sum - v[n-1]);
}

int main() {
	vector<int> v {1,2,3};
	cout<<subsetSum(v, v.size(), 4);

	return 0;
}
/**
 * T(n): theta(2^n)
 * 
 */
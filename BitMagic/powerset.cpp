#include <iostream>
#include <string>

using namespace std;

int pow(int x, int n) {
	long long int res = 1;
	while(n) {
		if(n & 1) {
			res *= x;
		}

		x*=x;
		n >> 1;
	}

	return res;
}

/**
 * @brief prints the subset for the given string.
 * "ab"
 * " " "a" "b" "ab"
 * 
 * @param str 
 */
void powerset(string& str) {
	/**
	 * we know for a given set there will be 2^n subset.
	 * for each loop, we check it's binary value with the corresponding posn of
	 * the character in the string. if it matches then we print the character.
	 * 
	 */
	for(int i = 0; i < pow(2, size(str)); ++i) {
		for(int j = 0; j < size(str); ++j) {
			if(i & (1 << j)) cout<<str[j];
		}

		cout<<' ';
	}
}


int main() {
	string str{ "abc" };
	powerset(str);

	return 0;
}

/**
 * T(n): O(2^n * n) n:size of string.
 * auxiliary space: O(1)
 * 
 */
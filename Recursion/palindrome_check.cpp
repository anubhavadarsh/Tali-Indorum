#include <iostream>
#include <string>

using namespace std;

/**
 * @brief check if the given string is palindrome or not.
 * 
 * @param s 
 * @param start 
 * @param end 
 * @return true 
 * @return false 
 */
bool func(string& s, int start, int end) {
	if (start >= end) return true;

	//short-circuit
	return (s[start] == s[end]) && func(s, start + 1, end - 1);
};

int main() {
	string s{ "aba" };
	cout <<boolalpha<< func(s, 0, size(s)-1);

	return 0;
}

/**
 * T(n): O(n)
 * Auxiliary space: O(n)
 * 
 */
#include <iostream>
#include <string>

using namespace std;

/**
 * @brief print all permutations for a given string.
 * 
 * @param str 
 * @param i 
 */
void permStr(string str, int i) {
	if(i == str.length() -1) {
		cout<<str<<' ';
		return;
	}

	for(int j = i; j < str.length(); ++j) {
		swap(str[i], str[j]); //swap two characters.
		permStr(str, i+1); //make a recursion call
		swap(str[i], str[j]); //reset those characters.
	}
}

int main() {
	permStr("abc", 0);
	return 0;
}
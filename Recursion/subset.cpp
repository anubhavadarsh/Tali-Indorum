#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * @brief generate subset of a given string.
 * s = "abc"
 * " " "a" "b" "c" "ab" "ac" "bc" "abc"
 * 
 * @param s 
 * @param curr 
 * @param i 
 */
void subset(string& s, string curr = "", int i = 0) {	
	/**
	 * at this point curr will be equal to a substring and
	 * i will be equal to the length of the string
	 * 
	 */
	if(i == s.length()) {
		cout<<curr<<' ';
		return;
	}

	subset(s, curr, i+1);
	subset(s, curr+s[i], i+1);
}

int main() {
	string s = "abc";
	subset(s,"",0);
	return 0;
}
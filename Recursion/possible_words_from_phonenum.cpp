#include <iostream>
#include <vector>

using namespace std;

vector<vector<string>> lettersToNum = {
		{},
		{},
		{"a", "b", "c"},
		{"d", "e", "f"},
		{"g", "h", "i"},
		{"j", "k", "l"},
		{"m", "n", "o"},
		{"p", "q", "r", "s"},
		{"t", "u", "v"},
		{"w", "x", "y", "z"},
};

vector<string> v = {};
/**
 * @brief Given a keypad as shown in the
 * diagram, and an N digit number which is represented
 * by array a[ ], the task is to list all words which
 * are possible by pressing these numbers.
 * [1 -> ' ', ' ', ' ',       2 -> 'a', 'b', 'c',  3 -> 'd', 'e', 'f',
 *  4 -> 'g', 'h', 'i',       5 -> 'j', 'k', 'l',  6 -> 'm', 'n', 'o',
 *  7 -> 'p', 'q', 'r', 's',  8 -> 't', 'u', 'v',  9 -> 'w', 'x', 'y', 'z'
 * ]
 *
 * @param arr
 * @param N
 * @param index
 * @param str
 */
void solve(int arr[], int N, int index = 0, string str = "")
{

	if (index == N)
	{
		v.push_back(str);
		return;
	}

	auto letters = lettersToNum[arr[index]]; // extract all the letters for that position
	for (auto l : letters)
	{
		solve(arr, N, index + 1, str + l); // move on to the next position, and add a letter at pos index
	}
}

vector<string> possibleWords(int arr[], int N)
{
	v.clear();
	solve(arr, N);
	return v;
}

main()
{
	int arr[] = {2, 3, 4};
	auto res = possibleWords(arr, 3);

	for (auto i : res)
	{
		cout << i << ' ';
	}

	return 0;
}
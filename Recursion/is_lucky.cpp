#include <iostream>

using namespace std;
/**
 * @brief Lucky numbers are subset of integers.
 * take integers 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 delete every 2nd number
 * 1, 3, 5, 7, 9 delete every 3rd number
 * 1, 3, 7, 9, 13, 15
 * now continue this the numbers remaining is called lucky numbers
 *
 * @param n
 * @return int
 */
int isLucky(int n, int counter = 2)
{
	/*
	if we denote each number with index starting with 1,
	1, 2, 3, 4, 5, 6
	[1, 2, 3, 4, 5, 6]
	we have to delete the number whose index is divisible with a counter which increases.
	a number is not lucky if the index is divisible by counter and lucky if counter exceeds index.
	*/
	if (n % counter == 0)
		return false;
	else if (counter > n)
		return true;

	n -= n / counter; // measure the index of the n

	return isLucky(n, counter + 1);
}

int main()
{
	cout << isLucky(19);
	return 0;
}

/**
 * T(n) = theta(n)
 *
 */
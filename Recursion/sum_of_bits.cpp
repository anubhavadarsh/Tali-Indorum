#include <iostream>

using namespace std;

int sumOfBits(int n, int r = 2)
{
	if (n > 0)
	{
		return n % r + sumOfBits(n / r, r);
	}
	else
	{
		return 0;
	}
}

int main()
{
	cout << sumOfBits(5555);
	return 0;
}
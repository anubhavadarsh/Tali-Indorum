#include <iostream>

using namespace std;

int exactly3Divisors1(int N) {
	/*
	  This function how many number less than or equal to N has 3 divisors.
	  Upon analysing It is easy to see that only squares of prime numbers have 3 divisors.
	*/
	int count = 0;
	for (int i = 2; i * i <= N; ++i) { 
		/* 
		   this loop runs upto sqrt(N) : if N = 49 the loop will run upto 7, it is seen 
		   that upto that number the square exist under N; 
		*/ 
		bool isPrime = true;
		if (i == 2 || i == 3) {
			isPrime;
		}
		else if (i % 2 == 0 || i % 3 == 0) {
			isPrime = false;
		}
		else {
			for (int j = 5; j * j <= i; j += 6) {
				if (i % j == 0 || i % (j + 2) == 0) { isPrime = false; }
			}
		}

		if (isPrime) {
			++count;
		}
	}

	return count;
}


int main() {
	cout << exactly3Divisors1(23) << '\n';
	return 0;
}
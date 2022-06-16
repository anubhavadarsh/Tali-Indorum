#include <iostream>
#include <cstdio>

/**
 * @brief we need to move disc ordered by size from one tower to another.
 * rules:
 * 1. only move one disc at a time.
 * 2. no larger disc above smaller disc.
 * 3. only top disc of the tower can be moved.
 * 
 * @param n 
 * @param A 
 * @param B 
 * @param C 
 */
void towerOfHanoi(int n, char A, char B, char C) {
	if(n == 1) {
		printf("move disc %d from tower %c to %c.\n",n,A,C);
		return;
	}

	towerOfHanoi(n-1, A, C, B);
	printf("move disc %d from tower %c to %c.\n",n,A,C);
	towerOfHanoi(n-1, B, A, C);
}

int main() {
	towerOfHanoi(3,'A', 'B', 'C');
	return 0;
}
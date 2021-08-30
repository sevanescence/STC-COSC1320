#include <stdio.h>

// C how to Program Fig 2.13 - Using equality and relational operators.

// Makoto Miyamoto
// COSC 1320
// Aug 30, 2021

int main(void) {
	int n1, n2;

	printf("Enter two integers, and i will tell you\nthe relationships they satisfy: ");
	scanf("%d %d", &n1, &n2);

	if (n1 == n2) {
		printf("%d is equal to %d\n", n1, n2);
	}

	if (n1 != n2) {
		printf("%d is not equal to %d\n", n1, n2);
	}

	if (n1 < n2) {
		printf("%d is less than %d\n", n1, n2);
	}

	if (n1 > n2) {
		printf("%d is greater than %d\n", n1, n2);
	}

	if (n1 <= n2) {
		printf("%d is less than or equal to %d\n", n1, n2);
	}

	if (n1 <= n2) {
		printf("%d is greater than or equal to %d\n", n1, n2);
	}
}


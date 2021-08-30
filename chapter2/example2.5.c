#include <stdio.h>

// C how to Program Fig. 2.5 - Addition program

// Makoto Miyamoto
// COSC 1320
// Aug 30, 2021

int main(void) {
	int i1, i2, sum;

	printf("Enter first integer: ");
	scanf("%d", &i1); // passing i1 by pointer
	// a pointer is an address to a variable.
	// T * contains the address of the T it points to.
	// To access the value at an address, the pointer
	// must be dereferenced (*t). For T t = v, and
	// T *tp = &t, *tp == v.
	
	printf("Enter second integer: ");
	scanf("%d", &i2);

	sum = i1 + i2;

	printf("%d + %d = %d\n", i1, i2, sum);
}

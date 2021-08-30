#include <stdio.h>

// C how to Program Fig. 2.1 but with slight edits and annotations
// to highlight the C99 standard and properly writing text to stdout

// Makoto Miyamoto
// COSC 1320
// Aug 30, 2021

// declaring a function prototype with no parameters
// does not equal an empty parameter list, but rather
// an empty identifier list. passing parameters
// to R foo() is undefined behaviour (see: ISO/IEC 9899:1999 6.5.2.2/6)
// however passing parameters to R foo(void) throws errors at compile time.
int main(void) {
	puts("Welcome to C!");
	// this is a better use than printf,
	// which only should be used when
	// formatting a string. if you want
	// to append a char without a newline,
	// then use putchar. the only real reason
	// to use printf is if you want to
	// print a formatted string or print
	// a string without a newline.
	
	return 0;
	// returning 0 from main is not necessary
	// since C99. refer to ISO/IEC 9899:1999 5.1.2.2.3:
	// "If the return type of the main function is a type compatible
	// with int, a return from the initial call to the main function
	// is equivalent to calling the exit function with the value returned
	// by the main function as its argument; reaching the } that terminates
	// the main function rfeturns a value of 0."
	// 
	// This is undefined behaviour in C89, see 6.9.1/12:
	// "If the } that terminates a function is reached, and the value of the function call
	// is used by the caller, the behaviour is undefined."
}

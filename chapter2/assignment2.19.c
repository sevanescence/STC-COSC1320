#include <stdio.h>
#include <stdarg.h>

// Chapter 2 Assignment 2.19 - Calculations
// Write a program that inputs three different integers from the keyboard,
// then prints the sum, the average, and the product. The screen dialog
// should appear as follows:
//
// >Input three different integers: 13 27 14
// >Sum is 54
// >Product is 4914

// Makoto Miyamoto
// COSC 1320
// Aug 30, 2021

// Accumulate an int array.
// params:
// start - pointer to first element
// elements - number of items to accumulate
// __default__ - the default value, "default" is a keyword :/
// acc - accumulator function, must take two int arguments and return an int.
int accumulate(int const *start, size_t elements, int const __default__, int (*acc)(int, int)) {
    int v = __default__;
    int const *const end = start + elements;
    for (int const *it = start; it != end; ++it) {
        v = acc(v, *it);
    }
    return v;
}

int add(int x, int y) {
    return x + y;
}

int multiply(int x, int y) {
    return x * y;
}

float mean(float sumOfSet, size_t sizeOfSet) {
    return sumOfSet / sizeOfSet;
}

int main(void) {
    int array[3];

    printf("Input three different integers: ");
    for (int *it = array; it != &array[2]+1; ++it) scanf("%d", it);

    int sum = accumulate(array, 3, 0, &add);
    int prod = accumulate(array, 3, 1, &multiply);
    float avg = mean(sum, 3);

    printf("Sum is %d\nAverage is %.2f\nProduct is %d\n", sum, avg, prod);
}

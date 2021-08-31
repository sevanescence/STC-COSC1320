#include <stdio.h>

// Chapter 2 Assignment 2.29 - ASCII
// Print the ASCII representation of your name LOL!

// Makoto Miyamoto
// COSC 1320
// Aug 30, 2021

int main(void) {
    size_t const SIZE = 16;
    char s[16] = "Makoto Miyamoto";
    for (char *c = s; c != &s[SIZE - 1 /* avoid printing \0 */]; ++c) {
        printf("%d ", *c);
    } puts("");
}

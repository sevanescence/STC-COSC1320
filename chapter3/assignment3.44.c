#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/**
 * @brief Check if an array matches a value
 * 
 * @param array pointer to beginning of array
 * @param count length of array
 * @param matcher a function that takes two \code int \endcode types 
 * and returns whether \a val matches any element in \a array.
 * @param val the value which elements in the array will be compared to
 */
bool any_match(int *array, size_t count, bool (*matcher)(int, int), int val);

/**
 * @brief Check if \a n is less than \a m.
 */
bool nm_less_than(int n, int m);

int main(void) {
    int sides[3] = {0, 0, 0};

    while (any_match(sides, 3, nm_less_than, 1)) {
        printf("Enter three integral non-zero lengths: ");
        scanf("%d %d %d", sides, sides + 1, sides + 2);
    }

    if (pow(sides[0], 2) + pow(sides[1], 2) == pow(sides[2], 2)) {
        puts("Shape is a valid right triange :)");
    } else {
        puts("Shape is not a valid right triange :(");
    }

    return EXIT_FAILURE;
}

bool any_match(int *array, size_t count, bool (*matcher)(int, int), int val) {
    for (int *it = array; it != &array[count]; ++it) {
        if (matcher(*it, val)) return true;
    }
    return false;
}

bool nm_less_than(int n, int m) {
    return n < m;
}

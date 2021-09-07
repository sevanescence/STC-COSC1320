#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

time_t gettimemillis(time_t *tloc) {
    struct timeval _timev;
    gettimeofday(&_timev, NULL);
    time_t t = (((time_t) _timev.tv_sec * 1000000) + (time_t) _timev.tv_usec) / 1000;
    if (tloc) *tloc = t;
    return t;
}

int main(void) {
    time_t mnow = gettimemillis(NULL);
    srand(mnow);

    int remainder = 200 % 50;
    int random = rand() % 6 + 1;

    printf("%d\n%d\n", random, remainder);

    int die20rand = rand() % 20 + 1;
    printf("D20 roll: %d\n", die20rand);

    return EXIT_SUCCESS;
}

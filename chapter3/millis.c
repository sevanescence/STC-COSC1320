#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

#include "millis.h"

time_t gettimemillis(time_t *tloc) {
    struct timeval _timev;
    gettimeofday(&_timev, NULL);
    time_t t = (((time_t) _timev.tv_sec * 1000000) + (time_t) _timev.tv_usec) / 1000;
    if (tloc) *tloc = t;
    return t;
}

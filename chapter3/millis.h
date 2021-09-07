#ifndef MILLIS_H
#define MILLIS_H

/**
 * @brief Get the current time in milliseconds. \par
 * 
 * The \a gettimemillis() function returns the value of time in seconds since the Epoch. \par
 * The \a tloc argument points to an area where the return value is also stored. 
 * If \a tloc is a null pointer, no value is stored. \par
 * 
 * Confirming to https://pubs.opengroup.org/onlinepubs/7908799/xsh/time.html
 * 
 * @param tloc pointer to a time_t, can be NULL
 */
time_t gettimemillis(time_t *tloc);

#endif

#include <stdio.h>
#include <stdlib.h>

// Test #1 - Assigned by STC in COSC 1320
// Create a directory on the linux server called test1. You must place the test in that directory 
// and lose 5 points and I will organize the file in the appropriate folder.

// Write a program that will personally great you. (e.g. Welcome back agent Perez!) 
// After greeting you, the program should prompt you for 3 numbers representing, the 
// current date's month, day and year. (e.g. below)

// What month is it? (enter as a number): 8
// What day is it? (enter as a number): 22
// What year is it? (enter as a number): 2020)

// You will use those numbers to calculate YOUR current age. The program will display 
// your age and based on the age the program calculated should display a response 
// based on 3 possible conditions. (e.g. below)

// age below 18 display Spring C-hicken
// age above 18 below 25 display Young C-hicken
// age above 25 display Just a C-hicken)

// The program should also wish you a Happy Birthday! or a Happy Unbirhtday!

/**
 * @brief A meta container for a pseudo-date.
 */
typedef struct non_unix_compliant_date {
    int day, month, year;
} date;

/**
 * @brief Returns the difference of two pseudo-dates.
 * 
 * @param d1 The subtrahend
 * @param d2 The minuend
 */
date diff(date d1, date d2);

int main(void) {
    puts("Welcome back Magdalena Quiroz LOL!");
    puts("Note: This calculator is not accurate because it does not consider leap year, and normalizes all month durations to 30 days :)");

    date now;
    printf("What day is it? (enter as as number): ");
    scanf("%d", &now.day);
    printf("What month is it? (enter as a number): ");
    scanf("%d", &now.month);
    printf("What year is it? (enter as a number): ");
    scanf("%d", &now.year);

    date birthdate;
    printf("What day of the month were you born? (enter as as number): ");
    scanf("%d", &birthdate.day);
    printf("What month of the year were you born? (enter as a number): ");
    scanf("%d", &birthdate.month);
    printf("What year were you born? (enter as a number): ");
    scanf("%d", &birthdate.year);

    date age = diff(birthdate, now);
    printf("You are (approximately) %d years old :)\n", age.year);

    // required by the assignment specification
    if (age.year < 18) {
        puts("Spring C-hicken :)");
    } else if (age.year >= 18 && age.year <= 25) {
        puts("Young C-hicken :)");
    } else {
        puts("Just a C-hicken :)))");
    }

    if (now.day == birthdate.day && now.month == birthdate.month) {
        puts("Happy birthday :)");
    } else {
        puts("Happy... unbirthday? No specification for \"unbirthday\" was provided :T");
    }
}

date diff(date d1, date d2) {
    int d1_days = d1.day + (d1.month * 30) + (d1.year * 365);
    int d2_days = d2.day + (d2.month * 30) + (d2.year * 365);
    int days_dt = d2_days - d1_days;

    int days = days_dt;
    int months = days % 365 / 30;
    int years = days / 365;
    days = days % 365 % 30;

    date d = { .day = days, .month = months, .year = years };
    return d;
}

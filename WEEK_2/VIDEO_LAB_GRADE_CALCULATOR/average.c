#include <stdio.h>
#include <stdlib.h>

// Makoto Miyamoto
// COSC 1320
// August 29, 2021

void dispatch(char const *win_cmd, char const *nix_cmd) {
    #ifdef _WIN32
        system(win_cmd);
    #else
        system(nix_cmd);
    #endif
}

void get_float(char const *s, float *f);
float sum_float(float const *farr, size_t elements);

const int GRADE_COUNT = 3;

int main() {
    // clear screen
    dispatch("cls", "clear");

    // declare variables

    // container for grades
    float grades[GRADE_COUNT], average;
    char letterGrade = 0;

    char const *templ = "Enter grade %d: "; char buf[24];
    for (int i = 0; i < GRADE_COUNT; ++i) {
        sprintf(buf, templ, i + 1);
        get_float(buf, &grades[i]);
    }

    // calculate the average
    average = sum_float(grades, GRADE_COUNT) / GRADE_COUNT;

    // check if the average grade is perfect
    if (average >= 100) {
        puts("Your average is perfect: Excellent Job :)))))");
    } else {
        puts("Your average sucks LOL get ratio'd");
    }

    // determine the letter grade
    if (average >= 90) {
        letterGrade = 'A';
    } else if (average >= 80) {
        letterGrade = 'B';
    } else if (average >= 70) {
        letterGrade = 'C';
    } else {
        letterGrade = 'F';
    }

    // display average and letter grade
    printf("Average: %.2f\nLetter Grade: %c\n", average, letterGrade);
}

void get_float(char const *s, float *f) {
    printf(s);
    scanf("%f", f);
}

float sum_float(float const *farr, size_t elements) {
    float sum = 0;
    for (float const *fit = farr; fit < farr + elements; ++fit) {
        sum += *fit;
    }
    return sum;
}

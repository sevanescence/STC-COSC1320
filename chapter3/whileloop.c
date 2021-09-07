#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /*
        There are four parts of a loop:
            1: declare a counter (iterator variable)
            2: initialize the counter with a starting value
            3: test the counter using the final value
            4: increment the counter
    */
    // int counter = 0;
    // while (counter <= 10) {
    //     printf("%d\n", counter);
    //     ++counter;
    // }

    // // calculate the total of 5 values

    int total = 0; // accumulator
    int tmp;
    //counter = 0;
    // while (counter < 5) {
    //     printf("Enter value %d: ", counter + 1);
    //     scanf("%d", &tmp);
        
    //     if (tmp >= 0) {
    //         total += tmp;
    //         ++counter;
    //     } else {
    //         puts("Don't enter negative numbers, you halfwit.\n");
    //         continue;
    //     }
    // }

    // user controlled loop

    total = 0;
    tmp = 0;

    while (tmp != -1) {
        printf("Enter -1 to quit: ");
        scanf("%d", &tmp);
        if (tmp != -1) total += tmp;
    }

    printf("TOTAL: %d\n", total);

    return EXIT_SUCCESS;
}

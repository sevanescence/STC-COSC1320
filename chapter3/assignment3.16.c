#include <stdio.h>
#include <stdlib.h>

#define QUIT -1

int main(void) {
    int count = 0;
    double totalUsage = 0;

    double gallonsInTank, milesInTank = 0, usage;
    while (milesInTank != QUIT) {
        printf("Enter mileage this time (or -1 to end): ");
        scanf("%lf", &milesInTank);
        if (milesInTank != QUIT) {
            printf("Enter gallons in tank this time: ");
            scanf("%lf", &gallonsInTank);

            usage = milesInTank / gallonsInTank;
            printf("Usage this time: %.2lf miles per gallon\n", usage);
            totalUsage += usage; ++count;
        } else {
            break;
        }
    }
    if (count > 0) printf("Average usage: %.2lf miles per gallon", totalUsage / (double) count);

    return EXIT_SUCCESS;
}

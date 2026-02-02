#include <stdio.h>

int main(void) {
    int months;
    printf("Monthly Savings Calculations\n");
    printf("----------------------------\n");
    printf("Enter number of months: ");
    scanf(" %d", &months);
    int total = months * ((months + 1) / 2);
    printf("Formula used: ");
    printf("Total = n * ((n + 1) / 2)\n");
    printf("Total savings after %d", months);
    printf(" months is: %d\n", total);
    
    return 0;
}
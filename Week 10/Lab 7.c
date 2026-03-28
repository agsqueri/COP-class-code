#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void guessNumber(int num);

int main() {
    int randomNum;

    srand(time(0));

    randomNum = (rand() % 6) + 1;

    guessNumber(randomNum);

    return 0;
}

void guessNumber(int num) {
    if (num == 1) {
        printf("The random number is 1.\n");
    } 
    else if (num == 2) {
        printf("The random number is 2.\n");
    } 
    else if (num == 3) {
        printf("The random number is 3.\n");
    } 
    else if (num == 4) {
        printf("The random number is 4.\n");
    } 
    else if (num == 5) {
        printf("The random number is 5.\n");
    } 
    else if (num == 6) {
        printf("The random number is 6.\n");
    } 
    else {
        printf("Invalid number.\n");
    }
}
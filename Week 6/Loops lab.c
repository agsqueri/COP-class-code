#include <stdio.h>

int main() {

    int i = 1;
    int sum = 0;
    int evenSum = 0;
    int num;

    printf("What number of times do you want this to loop? ");
    scanf(" %d", &num);
    while (i <= num)
    {
        printf("%d\n", i);
        if(i % 2 == 0)
        {
            evenSum += i;
        }
        if(sum > 20)
        {
            break;
        }
        sum += i;
        i++;
    }
    printf("Sum = %d\n", sum);
    printf("Even Sum = %d\n", evenSum);

    return 0;
}
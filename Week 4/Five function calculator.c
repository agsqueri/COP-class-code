#include <stdio.h>

int main(void) {
    int num1,num2;
    char operator;
    float result;
    printf("Five Function Calculator\n");
    printf("------------------------\n");

    printf("Enter the first number: ");
    scanf(" %d", &num1);

    printf("Enter the operator you want to use: ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf(" %d", &num2);
    
    if(operator == '+')
    {
        printf(" %f", result = num1 + num2);
    }

    else if(operator == '-')
    {
        printf(" %f", result = num1 - num2);
    }
    else if(operator == '*')
    {
        printf(" %f", result = num1 * num2);
    }

    else if(operator == '/')
    {
        if(num2 == 0)
        {
            printf("Error: cannot divide by 0 ");
        }
        else
        {
            printf(" %f", result = num1 / num2);
        }
    }
    else if(operator == '%')
    {
        printf(" %f", result = num1 % num2);
    }
    return 0;
}
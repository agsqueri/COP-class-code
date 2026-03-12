#include <stdio.h>
#include <math.h> //All libraries must be added before main
int main(){
    int num;
    printf("Enter a number to convert to binary: ");
    scanf(" %d", &num)
    while(num > 0){
        printf(num % 2);
        num /= 2;
    }
    
    //All code goes here (single line comment)
    /* This kind of comment
    Lasts as many lines as you need
    */


    return 0;
}

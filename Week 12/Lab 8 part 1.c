#include <stdio.h>

void main(){
    int myArray[10];
    printf("Enter 10 integers: ");
    for(int i = 0; i <= 9; i++){
        scanf("%d", &myArray[i]);
        printf("value %d is %d \n", i + 1, myArray[i]);
    }
    for(int j = 9; j >= 0; j--){
        printf("value %d is %d \n", j + 1, myArray[j]);
    }
}

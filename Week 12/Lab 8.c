#include <stdio.h>

void main(){
    int myArray[11], temp = 9;
    printf("Enter 10 integers: ");
    for(int i = 0; i <= 10; i++){
        scanf("%d ", &myArray[i]);
        printf("value %d is %d \n", i + 1, myArray[i]);
    }
    for(int j = 10; j >= 0; j--){
        scanf("%d ", &myArray[j]);
        printf("value %d is %d \n", j - 1, myArray[j]);
    }
}

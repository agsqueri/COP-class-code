#include <stdio.h>

int main() {
int i, ch, sum, num, product = 0;
while(1){
    printf("=====MENU===== \n");
    printf("1. Sum from 1 to n \n");
    printf("2. Product from 1 to n \n");
    printf("3. Multiplication table \n");
    printf("4. Exit \n");
    printf("Enter your choice: \n");
    scanf("%d ", &ch);
    
    if(ch == 1){
        printf("Enter your number: \n");
        scanf("%d ", &num);
        for(i = 1; i <= num; i++){
            sum += i;
            }
        printf("Sum from 1 to %d = %d", num, sum);
    }else if(ch == 2){
        printf("Enter your number: \n");
        scanf("%d ", &num);
        for(i = 1; i <= num; i++){
            product *= i;
        }
        printf("Product from 1 to %d = %d", num, product);
    }else if(ch == 3){
        printf("Enter your number: \n");
        scanf("%d ", &num);
        for(i = 1; i <= 10; i++){
            printf("%d x %d = %d \n", num, i, num*i);
        }
    }else if(ch == 4){
        printf("Exiting the program... \n");
        break;
    }else if(ch < 1 || ch > 4){
        printf("Invalid choice, enter a valid option \n");
    }

}
return 0;
}
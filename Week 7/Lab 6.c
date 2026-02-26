#include <stdio.h>

int main() {
int i, n, sum, num= 0;

while(n < 4){
    printf("=====MENU=====");
    printf("1. Sum from 1 to n \n");
    printf("2. Product from 1 to n \n");
    printf("3. Multiplication table \n");
    printf("4. Exit \n");
    printf("Enter your choice: \n");
    scanf("%d ", &n);
    if(n < 1 || n > 4)
    printf("Invalid choice, enter a valid option \n");
    

}
return 0;
}
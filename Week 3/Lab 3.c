#include <stdio.h>
int main(void){
    int attendance;
    int quizAvg;

    printf("What is the student's attendance percentage: ");
    scanf( "%d", &attendance);
    printf("What is the student's quiz average: ");
    scanf(" %d", &quizAvg);
    if(attendance > 70 && quizAvg >= 60)
    {
        printf("The student is eligible for the exam.");
    }
    else
    {
        printf("The student is not eligible for the exam.");
    }




return(0);
}
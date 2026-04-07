#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rollDice(int num);

int main() {
    int randomNum;
    int boardLoc = 1;
    while (boardLoc <= 100){


        srand(time(0));

        randomNum = (rand() % 6) + 1;

        rollDice(randomNum);

        boardLoc = boardLoc + randomNum;
        printf("Your location on the board is %d\n", boardLoc);

        if (boardLoc == 3){
            boardLoc = 22;
            printf("You found a ladder, you climb to space %d\n", boardLoc);
        }
        else if(boardLoc == 5){
            boardLoc = 8;
            printf("You found a ladder, you climb to space %d\n", boardLoc);
        }
        else if(boardLoc == 11){
            boardLoc = 26;
            printf("You found a ladder, you climb to space %d\n", boardLoc);
        }
        else if(boardLoc == 20){
            boardLoc = 29;
            printf("You found a ladder, you climb to space %d\n", boardLoc);
        }
        else if(boardLoc == 27){
            boardLoc = 56;
            printf("You found a ladder, you climb to space %d\n", boardLoc);
        }
        else if(boardLoc == 36){
            boardLoc = 44;
            printf("You found a ladder, you climb to space %d\n", boardLoc);
        }
        else if(boardLoc == 51){
            boardLoc = 67;
            printf("You found a ladder, you climb to space %d\n", boardLoc);
        }
        else if(boardLoc == 71){
            boardLoc = 92;
            printf("You found a ladder, you climb to space %d\n", boardLoc);
        }
        else if(boardLoc == 80){
            boardLoc = 99;
            printf("You found a ladder, you climb to space %d\n", boardLoc);
        }
        else if(boardLoc == 17){
            boardLoc = 4;
            printf("You fall down a slide and are now on space %d\n", boardLoc);
        }
        else if(boardLoc == 19){
            boardLoc = 7;
            printf("You fall down a slide and are now on space %d\n", boardLoc);
        }
        else if(boardLoc == 21){
            boardLoc = 9;
            printf("You fall down a slide and are now on space %d\n", boardLoc);
        }
        else if(boardLoc == 43){
            boardLoc = 34;
            printf("You fall down a slide and are now on space %d\n", boardLoc);
        }
        else if(boardLoc == 54){
            boardLoc = 31;
            printf("You fall down a slide and are now on space %d\n", boardLoc);
        }
        else if(boardLoc == 62){
            boardLoc = 18;
            printf("You fall down a slide and are now on space %d\n", boardLoc);
        }
        else if(boardLoc == 64){
            boardLoc = 60;
            printf("You fall down a slide and are now on space %d\n", boardLoc);
        }
        else if(boardLoc == 87){
            boardLoc = 24;
            printf("You fall down a slide and are now on space %d\n", boardLoc);
        }
        else if(boardLoc == 93){
            boardLoc = 73;
            printf("You fall down a slide and are now on space %d\n", boardLoc);
        }
        else if(boardLoc == 95){
            boardLoc = 75;
            printf("You fall down a slide and are now on space %d\n", boardLoc);
        }
        else if(boardLoc == 98){
            boardLoc = 79;
            printf("You fall down a slide and are now on space %d\n", boardLoc);
        }
        else if(boardLoc > 100){
            printf("You missed the goal and were sent back to your previous space. \n");
            boardLoc = boardLoc - randomNum;
        }
        else if(boardLoc == 100){
            printf("You win! \n");
            break;
        }
    }
    return 0;
}

void rollDice(int num) {
    if (num == 1) {
        printf("Your roll is 1.\n");
    } 
    else if (num == 2) {
        printf("Your roll is 2.\n");
    } 
    else if (num == 3) {
        printf("Your roll is 3.\n");
    } 
    else if (num == 4) {
        printf("Your roll is 4.\n");
    } 
    else if (num == 5) {
        printf("Your roll is 5.\n");
    } 
    else if (num == 6) {
        printf("Your roll is 6.\n");
    } 
    else {
        printf("Invalid number.\n");
    }
}
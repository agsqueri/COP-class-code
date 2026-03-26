#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int prevRoll = 0;

int rollDiceRecursive(int turns){
    int roll = rand() % 6 + 1;
    printf("Roll %d: %d\n", turns + 1, roll);

    if (roll == 6 && prevRoll == 6){
        return turns + 1;
    }
    prevRoll = roll;
    
    return rollDiceRecursive(turns + 1);
}

int main(){
    rollDiceRecursive(0);
    return 0;
}
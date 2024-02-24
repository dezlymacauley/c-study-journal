// NOTE: Intializing an array

#include <stdio.h>

int main() {

    int player_scores[5] = {11, 15, 30, 45, 90};
    
    printf("The first score is %i\n", player_scores[0]);
    
    player_scores[0] = 20;

    printf("The first score is now %i\n", player_scores[0]);

}


#include <stdio.h>

int main() {

    // [3][4] means 3 rows, and 4 columns
    // In this context there are 3 rows. 
    // Each row represents a player. There are 3 players

    // There are 4 columns. 
    // Each column represents a round. There are 4 rounds

    // The point of this entire array,
    // is to keep track of how each of the 3 players performed in 
    int fighter_scores_for_each_round[3][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {47, 48, 49, 50}
    };

    // This should print 35
    // Remember that both the rows and columns start from index 0
    printf("The second fighter, scored %i points in round 3\n",
           fighter_scores_for_each_round[1][2]);

}

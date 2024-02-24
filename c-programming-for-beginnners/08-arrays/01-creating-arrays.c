// NOTE: Arrays

// Elements of an array have to be of the same type

// This is an array of size 10. 
// It will have indices from 0 to 9
// index 0 is the first number
// index 9 is the 10th number

/*
NOTE: An example of what the code below will print out

Enter the 10 player scores:
 1> 95
 2> 32
 3> 55
 4> 44
 5> 33
 6> 32
 7> 88
 8> 66
 9> 44
10> 23

Average of the ten grades entered is: 51.20

*/

#include <stdio.h>

int main () {

    // Declaring an array that can store 10 numbers
    int player_scores [10];
    int number_of_scores = 10;

    // "long" is just an int that can hold bigger numbers
    long sum_of_scores = 0;

    // 0.0f means that this is explicitly a float.
    // 0.0 would be treated implicitly as a double
    float average_of_scores = 0.0f;

    printf("\nEnter the 10 player scores:\n");
    printf("=============================\n");
   
    for (int i = 0; i < number_of_scores; ++i) {
        printf("Score %i = ", i + 1);
        scanf("%i", &player_scores[i]);
        sum_of_scores += player_scores[i];
    }

    average_of_scores = (float)sum_of_scores/number_of_scores;
    
    printf("\nAverage of the ten players scores is: %.2f\n",
           average_of_scores);

    return 0;
    
}

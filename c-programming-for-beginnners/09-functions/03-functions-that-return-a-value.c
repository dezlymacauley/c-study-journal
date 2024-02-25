// NOTE: What is the difference between arguements and parameters?

// Parameters (When you are creating the function):
// These are the variables / inputs that you define inside the (),
// of a function when you are creating it.
// A function can also have no parameters.
// It's good practice to put "void" betweeen the parentheses

// Arguements (When you are using the function)
// When a function is called, the arguements are the data you pass into the
// functions parameters. The actual value of a variable,
// that get passed to the function

#include <stdio.h>

// The function is defined.
// The "int" before the function name means that the function,
// returns an integer

int multiplyTwoIntegers(int number1, int number2) {

    int result_of_calculation = number1 * number2; 
    return result_of_calculation;

}

// Adding "void" is optional here.
// Void means that the main function does not accept any arguments,
// in order to do its job.

int main(void) {
   
    // The function "multiplyTwoIntegers" is being used here
    // This functions accepts two arguments in order to do its job.
    int total_game_score = multiplyTwoIntegers(5,2) + 20;
    printf("The total score is: %i\n", total_game_score);
    return 0;
}

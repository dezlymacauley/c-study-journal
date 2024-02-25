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
// It accepts two arguments: number1 and number2
// The "void" before the function name is a way to show that the function,
// does not return a value.

// NOTE: What is meant by does not return a value
// The function simply does the calculation,
// and stores the answer in the variable "result_of_calculation"
// The function has a printf statement that displays the result,
// but the variable result_of_calculation is not returned.
// E.g. If you tried something like:
// int epic_number = 4 + multiplyTwoInteger(2,3);
// You would get an error.

void multiplyTwoIntegers(int number1, int number2) {

    int result_of_calculation = number1 * number2; 
    printf("The product of %i multiplied by %i is: %i\n",
           number1, number2, result_of_calculation);

}

// Adding "void" is optional here.
// Void means that the main function does not accept any arguments,
// in order to do its job.

int main(void) {
   
    // The function "multiplyTwoIntegers" is being used here
    // This functions accepts two arguments in order to do its job.
    multiplyTwoIntegers(5,2);
    multiplyTwoIntegers(3,3);
    multiplyTwoIntegers(7,2);
    return 0;
}



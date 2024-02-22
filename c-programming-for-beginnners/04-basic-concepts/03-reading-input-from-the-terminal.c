// scanf and printf formating:
// %s = strings
// %d = integers (whole numbers)
// %c = character

// %f = floating points (numbers with decimimals)
// To specify the number of numbers after the decimal point,
// you can do this: %.2f. That means 2 decimals

// %lf = doubles (E.g. 77.8)

// ----------------------------------------------------------------------------

// NOTE: The Difference between a float and a double

// FLOAT
// float is a single-precision floating-point number, 
// which typically occupies 4 bytes.
// Float numbers typically store around 7 significant digits.
// Example: 12345.6789

// DOUBLE
// double is a double-precision floating-point number,
// which typically occupies 8 bytes.
// Double numbers typically store around 15 significant digits.
// Example: 123456789.123456789

// ----------------------------------------------------------------------------

// Rules about scanf:
// When you use scanf, 
// the program will pause and actually wait for you to enter the data
// Scanf uses pointers to variables
// It returns the number of items that it successfully reads
// If you use scanf to read one of the basic variable types:
// int, float, double
// the put the `&` before the variable name
// If you use scanf to read a string into a character array,
// you don't need to use an &

#include <stdio.h>

int main() {

    // This is a string array of 100
    char favourite_brand[100];

    int number_of_cars;

    printf("Enter the number of cars available and your favourite brand: ");
  
    // NOTE: How to read multiple inputs using scanf

    // Remeber to include the `&` symbol after the variable name
    // except for Strings.
    scanf("%d %s", &number_of_cars, favourite_brand);

    // NOTE: When scanf is setup like this, you would enter multiple inputs
    // like this: 18 lambo 

    // The `\n` at the start means print this statement out on a new line
    // The `\n` at the end means "add a new line after printing this"
    printf("\nThere are %d cars available and your favourite brand is %s \n",
           number_of_cars, favourite_brand);

    return 0;
}

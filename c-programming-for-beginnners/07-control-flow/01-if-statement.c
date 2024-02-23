#include <stdio.h>

int main() {
    int number_to_test;
    int remainder;

    printf("Enter the number that you want to test: ");
    scanf("%i", &number_to_test);
    
    // % is an operator that returns the result of a division
    remainder = number_to_test % 2;

    if (number_to_test == 0) {
        printf("%i is even\n", number_to_test);
    } else if (remainder == 0) {
        printf("The number %i is even\n", number_to_test);
    } else {
        printf("The number %i is odd\n", number_to_test);
    };

    return 0;

}

// ----------------------------------------------------------------------------

// NOTE: The Difference between `%d` and `%i`

//  %d expects the input to be in decimal format.

//  %i allows the input to be in either decimal, octal (if preceded by '0'),
//  or hexadecimal (if preceded by '0x' or '0X') format.

// ----------------------------------------------------------------------------

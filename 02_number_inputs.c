#include <stdio.h>
// This is what allows you to use `printf` and `scanf`

int main() {
    int my_number;
    int one_smaller;
    
    // NOTE: You can declare mutiple variables on the same line
    // E.g. `int my_number, one_smaller;`

    printf("Enter my number\n");
    
    // NOTE: When using 'scanf', remember to include the '&' sign,
    // after the value.
    // This is because you don't want it to be a reference.
    // You don't want it to be the actual value

    scanf("%d", &my_number);

    one_smaller = my_number - 1;
    printf("The value of one_smaller is %d\n", one_smaller);
}

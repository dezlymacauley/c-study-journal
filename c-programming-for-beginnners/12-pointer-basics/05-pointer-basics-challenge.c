#include <stdio.h>

int main() {
    
    // Declaring and intializing the variables
    int num = 150;

    // Declaring and intializing the pointer
    // NULL means that the pointer does not point to anything.
    int *p_num = NULL;

    // Giving the pointer a memory address to point to:
    // Think of this as a read-only link to the value stored in a variable
    // `&` in this context is used to show that it is a memory address
    p_num = &num;
    // NOTE:
    // Remember to use p_num and NOT *p_num. 
    // You only use *p_num again when you want to use the value,
    // of the memory address that the pointer is pointing to.

    // In this case, use *p_num because you actually want the use the value.
    // So you would use the * again to deference the pointer.
    // %i in the print statement means integer.
    // This is because when you deference a pointer, 
    // you using the value of whatever it is pointing at.
    // In this case, p_num is pointing at num (which is an integer)
    printf("The value of p_num is %i\n", *p_num);

    return 0;
}

#include <stdio.h>

int main() {
    
    // ca is a character array that can hold 10 characters
    char ca[10];
    
    // ia is an integer array that can hold 10 characters
    int ia[10];

    // cp and ip are declared as pointer variables.
    // A pointer variable is a variable that points to a location in memory.
    // At this point ip and cp are not pointing to anything. 
    int* ip;
    char* cp;

    // NOTE: The key to Pointer Arithmetic is that,
    // a pointer to an integer is different than a pointer to a chracter

    cp = ca + 1;
    ip = ia + 1;
 
    printf("ca %p cp %p\n", ca, cp);
    printf("ia %p ip %p\n", ia, ip);

}

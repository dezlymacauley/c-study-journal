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

    // Here is an example of what an address looks like:
    // ca 0x7fff160a1b2e cp 0x7fff160a1b2f
    // ia 0x7fff160a1b00 ip 0x7fff160a1b04
    
    // Memory addresses are in hexidecimal format.
    // 0x means that the following digits are in hexidecimal format

    // NOTE: The key to Pointer Arithmetic is that,
    // a pointer to an integer is different than a pointer to a chracter
    // Both of these pointers are the same size,
    // because a pointer is an address and addresses are the same size.
    
    // If you add 1 to a character pointer,
    // that actually adds 1 to the address
    
    // If you add 1 to an integer pointer, that adds 4.
    // That is because each integer takes four characters.

    // NOTE: So to summarize, when you are incrementing pointers,
    // the type of the variable,
    // that the pointer is referencing actually matters.

    cp = ca + 1;
    ip = ia + 1;
 
    printf("ca %p cp %p\n", ca, cp);
    // ca 0x7fff160a1b2e cp 0x7fff160a1b2f
    // Notice that for a character array, incrementing by 1 adds 1
    // So the last value "e" is increased by 1 and becomes "f"  
    
    printf("ia %p ip %p\n", ia, ip);
    // ia 0x7fff160a1b00 ip 0x7fff160a1b04
    // Notice that for an integer array, incrementing by 1 actually adds 4
    // So the last value "0" is increased by 4 and becomes "4"  
}

// For more information on this subject:
// https://www.cc4e.com/book/chap05.md

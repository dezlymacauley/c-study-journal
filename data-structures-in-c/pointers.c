// This line allows me to use the printf macro from the C standard library
#include <stdio.h>

int main() {
    
    // x and y have been declared as integers on one line
    int x, y;
    
    // px is a pointer 
    int* px;

    // x has been intialized as 42
    x = 42;

    // px is pointing to the address of x
    // So think of px as a read-only version of whatever value is stored in x
    // & means reference
    px = &x;

    // I am using "lookup operator" or a "de-reference operator"
    // The line below means:
    // Go to the memory location of the value px is referencing,
    // and put then that into the variable y

    // * in this case is the "de-reference operator", that allows y to recieve,
    // the actual value of whatever px is pointing at.
    
    // In simple terms, px is pointing at x. x = 42;
    // y = *px; Means "I don't want the value of y to be the reference px,
    // but instead,
    // I want y to actually be the value of what px is pointing at".
    // And that value is x = 42;
    // So therefore y = 42
    y = *px;
    
    // %p is the format specifier for printing pointers
    // %d is the format specifier for printing integers
    // \n just means, print the next statement on a new line. 
    printf("%d %p %d\n", x, px, y);

}

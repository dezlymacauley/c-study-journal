// This is a single line comment

/*
This is a multi-line comment.
Paragraphs of text can be placed in here
*/

// All C programs start with this line
// This means include the C standard library
#include <stdio.h>

int main() {
    printf("Hello world\n"); 
    // the `\n` means new line. This will add a new line after hello world.
    
    printf("Answer %d\n", 42); // Answer 42
    
    printf("Name %s\n", "Sarah"); // Name Sarah
    // %s means string
    // "Sarah" is actually a character array.
    // It's actually 6 characters, 
    // because there is always a terminating 0 character at the end.
    
    printf("x %.1f i %d\n", 3.5, 100); // x 3.5 i 100
    // %.1f means floating point number, with only 1 digit of precision
    // %d means integer

}

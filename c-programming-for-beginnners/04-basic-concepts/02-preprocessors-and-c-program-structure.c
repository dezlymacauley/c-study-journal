// This is known as a preprocessor statement.
// They are marked by the # sign
// C will look at these statements first, before it compiles your code

// The #include statement is a preprocessor directive
// It is not strictly part of the executable program, however, 
// the program won't work without it.

// These statements are usually at the beginning of the source file.
// They can be placed anywhere, 
// but its best practice to leave them at the top.

#include <stdio.h>

// stdio.h is a header file. 
// It it part of the C standard library,
// and allows your program to display output (and other things),
// E.g things like printf();
// Header files end with the .h extension

// There are two types of header files:
// 1. System directory header files
// E.g. #include <stdio.h>

// 2. User-defined header files
// E.g. #include "purple-dragon.h"
// These are header files that you created.
// The double quotes tells the preprocessor to first look,
// in the current directory

// #infndef and #definge protect against multiple inclusions of a header file

int main() {
    printf("Hi, my name is Dezly\n");
    return 0; 
    // If the program completed all its tasks successfully,
    // the number 0 will be returned.
    // If there was an error, then an error code will be returned.
    // E.g. 452 - File could not be found.
}

// NOTE: Command line arguements in the main() function

// When the main() function is called by the runtime system,
// two arguements are actually passed to the function.

// The first arguement (argc)
// argc means arguement count.
// This is the number of arguements that will be typed into the command line
// This is an integer

// The second arguement (argv)
// This is an array of character pointers

// NOTE: I need a better understanding of this

#include <stdio.h>

int main(int argc, char *argv[]) {
        
    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of Arguments: %d\n", numberOfArguments);
    printf("Argument 1 is the program name: %s\n", argument1);
    printf("Argument 2 is the command line arguement: %s\n", argument2);

    return 0;
}

#include <stdio.h>

int main() {
    char my_line[1000];
    printf("Enter line\n");
    scanf("%[^\n]1000s", my_line); // means match any character that is not a new line.
    // That means scan until the end of the line, or until you reach 1000 characters.
    
    // NOTE: scanf is not the best way to read lines!
    // Use fgets instead!
    // fgets(line, sizeof(line), stdin);
    
    /*  
    
    fgets() reads a line of input from standard input (stdin) and stores it in the line buffer.
    sizeof(line) specifies the maximum number of characters to read into line, preventing buffer overflow.
    stdin is the standard input stream (usually the keyboard when running interactively).
    
    This code should achieve the same functionality as your original code, but it's safer because it prevents buffer overflow by specifying the maximum number of characters to read. Additionally, it's generally recommended to use fgets() for reading input because it handles newline characters more gracefully than scanf() and is less prone to unexpected behavior.

    */
    
    printf("Hello %s\n", my_line);
}

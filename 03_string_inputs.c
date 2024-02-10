#include <stdio.h>

int main() {
        
    // NOTE: How to create a variable that stores text in C

    // The variable hero_name is a 'character array of 100 characters'
    // This is the limit you set. 
    // If something tries to store a value in this string,
    // that is over 100 characters, the program will crash.

    char hero_name[100];
    printf("Enter your name\n");

    scanf("%100s", hero_name); // %100s means only read up to 100 characters.
    
    // NOTE: Why is there no '&' after hero_name?
    
    // This is because hero_name is an array
    // So when you put name in with no square brackets...
    // I.e. No index operator...
    // Then you are passing the address of the beginning of the array,
    // which in a sense is an '&'

    // By 'address' you mean,
    // the location of the beginning of a 100 character arrary called,
    // hero_name.

    printf("Hello %s\n", hero_name);


}

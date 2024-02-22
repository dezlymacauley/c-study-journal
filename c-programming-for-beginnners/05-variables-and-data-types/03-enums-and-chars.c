// NOTE: Enums

// A data types that allows you to create a variable,
// and specify the values that could be stored into that variable

// NOTE: Char
// `@` char means single characters.
// It is vital that you use single qoutes and not double qutes

// Escape sequences
// char x = '\n'; This means new line

#include <stdio.h>

int main() {

    char super_hero_symbol = '@';
    
    // Declaring the enum
    // Each option is an integer
    // The first option is 0 and so on.
    // E.g. blue = 0, red = 1, green = 2, purple = 3
   
    // The numbers are not neccessary. I have simply added them,
    // to make things easier to understand
    // You could simply declare the enum as:
    // enum WeaponColor {blue, red, green, purple};
    enum WeaponColor {blue = 0, red = 1, green = 2, purple = 3};

    // Creating a variable using the enum type
    enum WeaponColor lightsaber_color = purple; 

    printf("Your super hero symbol is %c\n", super_hero_symbol);
    
    // NOTE: Printing enums
    printf("Lightsaber color: %d\n", lightsaber_color);
    // This will print out "Lightsaber color: 3" 
    
    return 0;
}

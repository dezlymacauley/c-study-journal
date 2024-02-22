// NOTE: Basic data types

// int, float, double, char, _Bool

// The difference between these types,
// is in the amount of memory that the occupy and the range of values,
// they can hold.

// NOTE:
// The amount of storage that is alllocated to store a particular type of data,
// depends on the comupter than you are running (machine-dependent)
// an integer might take up 32 bits on your computer, 
// or perhaps it might be stored in 64

// int = integers (positive and negative numbers).
// In C the int type is a signed integer

// If an integer starts with 0 and the letter x (lowecase or uppercase,
// then the value is hexadecimal (base16) notation
// E.g. int rgbColor = 0xFFEF0D;

// ----------------------------------------------------------------------------

// Float

// Floating-point numbers.
// Numbers with decimals (positive and negative)
// There are also floating-point constants,
// that can be expressed in scientific notation.
// 1.7e4 means 1.7 x 10 to the power of 4

// ----------------------------------------------------------------------------

// Double 

// Same a float but with roughly twice the precision.
// Can store twice as many significant digits
// Most computers represent double values using 64 bits

// All floating-point constants are taken as double values by the C compiler.
// To explicitly express a float constanst, add either an `f` or `F`,
// to the end of the number.
// E.g. 12.5f

// ----------------------------------------------------------------------------

// _Bool

// Boolean
// Stores the value 0 or 1
// 0 means false / no / off
// 1 means true / yes / on

// ----------------------------------------------------------------------------

// Other Data types:

// C has three adjective keywords to modify the basic integer type.
// short, long, and unisgned

// ----------------------------------------------------------------------------

#include <stdio.h>

// This allows you to use the C99 syntax of boolean,
// that you'd normally see in most modern programming languages.
// E.g. --std=c99
#include <stdbool.h> 

int main() {

    float food_cost = 23.50;
    double scientific_number = 60.939340249824029;
   
    // Traditional Syntax | C 89 standard E.g. --std=c89 
    _Bool player_is_online = 1;

    // Newer Syntaxt | C 99 standard.
    bool team_has_a_mage = true;


    return 0;
}

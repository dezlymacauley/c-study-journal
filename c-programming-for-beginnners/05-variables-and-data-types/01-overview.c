// NOTE: RAM

// Read-only memory
// When your computer is on and executing your program,
// the instructions and the data that the program works with are stored in RAM.
// RAM's contents are lost when the computer is switched off.
// Hardrives store persistent data

// Think of RAM as an ordered sequence of boxes:
// When the box is full it represents 1,
// when the box is empty it represents 0
// Each box represents one binary digit, either 0 or 1 (true and false)
// Each box is called a bit

// ----------------------------------------------------------------------------

// NOTE: Bit
// Bits in memory are grouped into a sets of 8 (byte)
// 1 byte = 8 bits
// Each byte is labelled with a number that represents an address
// The address of a byte uniquely references that byte,
// in your computer's memory.

// To summarize: Memory consists of a large number of bits that are in groups
// of 8 (called bytes), and each byte has a unique address.

// ----------------------------------------------------------------------------

// NOTE: Variables Explained

// Constants = These are types of data that does not change,
// and it will retain its value throughout the life of the program.

// Variables = These are types of data that may change,
// or may be assigned values as the program runs.
// Variables are the names that you give to computer memory locations.
// And of course, computer memory locations are used to store values
// in a computer program

// Let's say you want to store two values in your program 10 and 20
// First create appropriate names. 
// E.g. numbers_of_chairs and number_of_tables

// Store your values in those two variables
// Retrieve and use the stored values from the variables

// Variable Naming Rules:
// Must begin with a letter or an underscore
// After that you can use any combination of letters and digits (0 to 9)
// Can't be a reserved word like "int"

// ----------------------------------------------------------------------------

// NOTE: Primitive Data types

// These are data types that are not objects and store all sorts of data
// In C, everything is a primitive data type because object are not part of C.

// Declaring a Variable:
// This is when you tell the compiler how a particular variable,
// will be used by the program.
// You need to declare a variable before you can use it.

// Intializing a Variable: 
// Giving the variable a value

// ----------------------------------------------------------------------------

#include <stdio.h>

int main() {
    int cars = 5;
    cars = 4;
}

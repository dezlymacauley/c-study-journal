// NOTE: Declaring Pointers

// ----------------------------------------------------------------------------

// The Syntax for declaring pointers is:
// int *pnumber; The * is what shows that it is a pointer
// It is a good idea to create the name that starts with a p,
// when using a pointer.

// The space between the * and the pointer name is optional
// Programmers use the space in a declaration,
// and omit it when deferencing a variable.

// You should always initialize a pointer when you declare it.

// ----------------------------------------------------------------------------

// NOTE: NULL Pointers
// The syntax for a NULL Pointer is:
// int *pnumber = NULL;
// To use a NULL Pointer in your code, you need to include the following:
// #include directive for stddef.h

// You can also intialize a pointer so that it does not point to anything.
// This is called a NULL Pointer.
// NULL is a constant that is defined in the standard library.

// It is the equivalent of zero for a pointer.
// The advantage of NULL is that it is a value that is guaranteed,
// not to point to any location in memory. 
// This means that it implicitly prevents the accidental overwriting of memory,
// by using a pointer that does not point to anything specific

// ----------------------------------------------------------------------------

// Address of operator: `&`

// If you want to intialize your variable with the address of a variable,
// you already have declared, using the "Address of operator"

// ----------------------------------------------------------------------------

int main () {

    int cool_number = 99;
    
    // This is a pointer that points to the address of cool_number. 
    int *p_cool_number = &cool_number;

    return 0;
}

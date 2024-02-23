#include <stdio.h>

int main() {
    int cars = 0;
    int *p_cars = NULL;

    cars = 10;

    // The reason I use p_cars and not *p_cars,
    // is because I am not trying to access the value in memory,
    // that the pointer is pointing to.
    
    // I am making the pointer point to the memory address of "cars".
    // &cars means memory address 
    // or think of it as p_cars is being given a read-only version of cars.

    // Before the pointer was set to NULL. 
    // NULL means explicitly nothing
    p_cars = &cars;

    // NOTE: How to print the memory address (not the actual value),
    // of a pointer?

    printf("The memory address (&cars), stored by the pointer p_cars is: %p\n",
           p_cars);
    // This will print out something like: 0x7ffdd35c80dc
    // Pointers occupy 8 bytes and the addresses have 16 hexadecimal digits

    
    printf("The memory address of &cars) is: %p\n",
           &cars);
    // This will print out something like: 0x7ffdd35c80dc
    // This will be the same as p_cars because of the statement p_cars = &cars;
    // Pointers occupy 8 bytes and the addresses have 16 hexadecimal digits

    // NOTE: How to display the memory address of the pointer itself:
    printf("The memory address of the actual pointer p_cars is: %p\n",
           (void*)&p_cars);
    // This will print out something like: 0x7ffc8d985990
    
    // NOTE: How to display,
    // the value of the memory address stored in a pointer:
    // Just pay attention to the `%i`
    // It's an integer because you are printing out the actual value.
    printf("The value of the memory address stored in p_cars is: %i\n",
           *p_cars);

}

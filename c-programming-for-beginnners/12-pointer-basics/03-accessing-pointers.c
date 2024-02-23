// You can access a pointer using the indirecton operator `*`
// `*` Is also referred to as the deference operator,
// because you use it to "deference" a pointer

#include <stdio.h>

int main() {
    
    int arrows_available = 15;
    
    // Assign the address of arrows_available to the pointer
    // "int*" is the variable type.
    // This means that the variable p_arrows_available, 
    // is a pointer that points to an integer.

    // p_arrows_available is pointing to the address of the integer,
    // arrows_available

    // the `&` before arrows_available means the "address of arrows_available"
    // In simple terms, the pointer callled p_arrows_available,
    // is being given a read-only copy of arrows_available.

    int *p_arrows_available = &arrows_available;
    
    // A pointer points to the memory address of a variable.
    // To access the value stored at the memory address,
    // that the pointer is referencing, the pointer must be deferenced.

    // This is done using the `*` operator.
    // The value of total ammo will be 15 + 5 = 20
    int total_ammo = *p_arrows_available + 5;
  
    printf("Your total ammo is: %i\n", total_ammo);

    // The value of arrows_available will still be 15
    printf("Arrows Available: %i\n", arrows_available);

    return 0;

}

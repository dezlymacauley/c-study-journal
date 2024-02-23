// NOTE: Switch Statement

// Cases must be simple expressions on constant expressions

#include <stdio.h>

int main() {
    
    // Declaring an enum of the available colours
    enum IceCreamFlavours {chocolate, strawberry, cheesecake, peach};

    // Creating a variable using the enum template:
    // The ice cream selected by the user,
    // is limited to a number of valid flavours 
    enum IceCreamFlavours ice_cream_choice = cheesecake;
    
    // The switch statement will then do something,
    // based on what is the value of "ice_cream_choice".
    switch (ice_cream_choice) {
        case chocolate:
            printf("Chocolate is my favourite");
        break;
        
        case cheesecake:
            printf("Cheesecake is my favourite");
        break;
        
        // For all other flavours, perform the action below
        default:
            printf("That's a good choice");
        break;
    } 


    return 0;
}

// NOTE: Conditional Operator

// This is a convinient way of assigning a value to a variable,
// depending on a set of conditions

#include <stdio.h>

int main() {

    int potions_collected;
    
    printf("Enter the number of potions you collected: ");
    scanf("%i", &potions_collected);

    int chance_of_survival;

    // The condition that will be checked is 
    // "Is the number of potions collected more than 10?"

    // If the condition is true then "chance_of_survival = 80"
    // If the condition is false then "chance_of_survival = 40" 
    chance_of_survival = (potions_collected > 10)? 80:40;

    if (chance_of_survival == 80) {
        printf("High chance of survival: %i percent\n", chance_of_survival);
    } else {
        printf("Low chance of survival: %i percent\n", chance_of_survival);
    }

    return 0;
}

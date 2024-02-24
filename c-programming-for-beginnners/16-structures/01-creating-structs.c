#include <stdio.h>

int main() {
    
    // Creating the structure
    struct PurchaseDate {
        int day;
        int month;
        int year;
    };
    
    // Creating a variable that is an instance of the structure
    struct PurchaseDate arkham_knight_bought;
    arkham_knight_bought.day = 24;
    arkham_knight_bought.month= 2;
    arkham_knight_bought.year= 2024;

    /*
    
    NOTE: A quicker way to intialize a struct in C
    
    struct PurchaseDate arkham_knight {24, 2, 2024};
    
    Or you could intialize only certain fields

    struct PurchaseDate arkham_knight {.year = 2024};

    Or you could use a compound literal:

    arkham_knight = (struct PurchaseDate) {.year = 2024};

    */

    printf("Arkham Knight was bought: %i, %i, %i",
           arkham_knight_bought.day,
           arkham_knight_bought.month,
           arkham_knight_bought.year);

}

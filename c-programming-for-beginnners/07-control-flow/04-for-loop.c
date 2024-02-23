// NOTE: For loop

// for(startin_condition; continuation_condition; action_per_iteration)

#include <stdio.h>

int main() {
    
    // 1 to 5 inclusive of 5
    // 1 x 2, 2 x 2, 3 x 2, 4 x 2, 5 x 2
    for (int i = 1; i <= 5; i++) {
        printf("Number %i\n", i*2);
    }
    
    return 0;

}

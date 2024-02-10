#include <stdio.h>

int main() {

    printf("Guess the secret number\n");
    printf("Hint it's between 1 and 30\n");
    printf("==============================\n");
    
    int secret_number = 18;
    int guess;

    while (scanf("%d", &guess) != EOF) {
        if (guess == secret_number) {
            printf("Your guess of %d was correct\n", guess);
            break;
        }
        else if (guess < secret_number) {
            printf("Your guess of %d was too low. Guess again\n", guess);
        } else {
            printf("Your guess of %d was too high. Guess again\n", guess);
        }

    }

}

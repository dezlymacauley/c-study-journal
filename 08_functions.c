#include <stdio.h>

int add_two(int number1, int number2)  {
    return number1 + number2;
}

int main() {
   int total = add_two(5, 3);
   printf("The total is %d\n", total); 
}

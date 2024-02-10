#include <stdio.h>

// NOTE: The words FILE and 

int main() {

char line[1000];
FILE *hand; 
// FILE is the variable type. *hand means that this is a pointer to a file object.

hand = fopen("romeo.txt", "r");

while (fgets(line, 1000, hand)!= NULL) {
        printf("%s", line);
    }

}

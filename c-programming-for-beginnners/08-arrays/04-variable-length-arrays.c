// NOTE: Variable length array

// In C variable-length array can be a misleading term.
// It does not mean that you can modify the length of the array after creation.
// A variable length array keeps the same size after creation.

// A variable length array allows you to specify the size of an array,
// with a variable when creating an array.

int main() {
    int number_of_students = 20;

    int scores[number_of_students];

}

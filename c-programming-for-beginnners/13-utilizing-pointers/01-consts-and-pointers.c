int main() {

    // This indicates that the value that the pointer is pointing to,
    // cannot be changed.
    long epic_number = 9999L;
    const long *p_epic_number = &epic_number;

    // In this case this is a constant pointer.
    // It is different from the one above.
    // This ensure that the point always points to the same thing.
    int cars = 43;
    int *const p_cars = &cars;

}

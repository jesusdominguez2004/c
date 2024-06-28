// W3Schools, C Pointers, Pointers
#include <stdio.h>

int main() {
    int myAge = 43;     // Variable declaration
    int* ptr = &myAge;  // Pointer declaration

    printf("Reference: %p\n", ptr);
    printf("Dereference: %d\n", *ptr);

    return 0;
}

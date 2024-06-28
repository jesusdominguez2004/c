// W3Schools, C Pointers, Pointers
#include <stdio.h>

int main() {
    int myAge = 43;
    int* ptr = &myAge;

    printf("Variable value: %d\n", myAge);
    printf("Variable memory address: %p\n", &myAge);
    printf("Variable memory address with the pointer: %p\n", ptr);

    return 0;
}

// W3Schools, C Memory, Memory Management
#include <stdio.h>

int main() {
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;
    
    printf("%lu\n", sizeof(myInt));     // 4 bytes
    printf("%lu\n", sizeof(myFloat));   // 4 bytes
    printf("%lu\n", sizeof(myDouble));  // 8 bytes
    printf("%lu\n", sizeof(myChar));    // 1 byte

    return 0;
}

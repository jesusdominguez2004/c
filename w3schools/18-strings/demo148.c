// W3Schools, C Strings, String Functions
#include <stdio.h>
#include <string.h>

int main() {
    char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Length is: %d\n", strlen(alphabet)); // 26 (returns the actual string length)
    printf("Size is: %d\n", sizeof(alphabet)); // 50 (returns the memory size in bytes)
    return 0;
}

// W3Schools, C Strings, String Functions
#include <stdio.h>
#include <string.h>

int main() {
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Length is: %d\n", strlen(alphabet)); // 26
    printf("Size is: %d\n", sizeof(alphabet)); // 27 (includes the '\0' character)
    return 0;
}

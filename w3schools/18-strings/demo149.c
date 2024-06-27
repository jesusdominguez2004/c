// W3Schools, C Strings, String Functions
#include <stdio.h>
#include <string.h>

int main() {
    // Note that the size of str1 should be large enough 
    // to store the result of the two strings combined 
    // (20 in our example).
    char str1[20] = "Hello ";
    char str2[] = "World!";

    strcat(str1, str2);
    printf("%s", str1);

    return 0;
}

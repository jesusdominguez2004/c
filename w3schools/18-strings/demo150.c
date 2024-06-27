// W3Schools, C Strings, String Functions
#include <stdio.h>
#include <string.h>

int main() {
    // Note that the size of str2 should be large enough 
    // to store the copied string (20 in our example).
    char str1[20] = "Hello World!";
    char str2[20];

    strcpy(str2, str1);
    printf("%s", str2);

    return 0;
}

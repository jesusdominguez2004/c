// W3Schools, C Strings, Strings
#include <stdio.h>

int main() {
    // '\0' is the null terminating character
    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char greetings2[] = "Hello World!";

    printf("%lu\n", sizeof(greetings));     // Outputs 13
    printf("%lu\n", sizeof(greetings2));    // Outputs 13

    return 0;
}

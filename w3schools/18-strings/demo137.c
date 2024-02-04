// W3Schools, C Strings, Strings
#include <stdio.h>

int main() {
    // '\0' is the null terminating character
    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char greetings2[] = "Hello World!";

    printf("%s\n", greetings);
    printf("%s\n", greetings2);

    return 0;
}

// W3Schools, C User Input
#include <stdio.h>

int main() {
    char fullName[30];

    printf("Type your full name: \n");

    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s", fullName);

    return 0;
}

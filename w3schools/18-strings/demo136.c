// W3Schools, C Strings, Strings
#include <stdio.h>

int main() {
    char carName[] = "Volvo";
    int length = sizeof(carName) / sizeof(carName[0]);
    int i;

    for (i = 0; i < length; ++i) {
        printf("%c\n", carName[i]);
    }

    return 0;
}

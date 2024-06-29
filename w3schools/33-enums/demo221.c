// W3Schools, C Enums
#include <stdio.h>

enum Level {
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75
};

int main() {
    enum Level myVar = MEDIUM;

    printf("%d", myVar);

    return 0;
}

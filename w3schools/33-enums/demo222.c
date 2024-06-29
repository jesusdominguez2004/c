// W3Schools, C Enums
#include <stdio.h>

enum Level {
    LOW = 5,
    MEDIUM, // now 6
    HIGH    // now 7
};

int main() {
    enum Level myVar = MEDIUM;

    printf("%d", myVar);

    return 0;
}

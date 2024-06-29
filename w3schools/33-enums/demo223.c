// W3Schools, C Enums
#include <stdio.h>

enum Level {
    LOW = 1,
    MEDIUM, // now 2
    HIGH    // now 3
};

int main() {
    enum Level myVar = MEDIUM;

    switch (myVar) {
        case 1:
            printf("Low Level");
            break;
        case 2:
            printf("Medium Level");
            break;
        case 3:
            printf("High Level");
            break;
    }

    return 0;
}

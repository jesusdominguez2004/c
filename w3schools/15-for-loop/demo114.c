// W3Schools, C For Loop, Real-Life Examples
#include <stdio.h>

int main() {
    int number = 2;
    int i;

    // Print the multiplication table for the number 2
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    
    return 0;
}

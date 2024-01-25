// W3Schools, C While Loop, Real-Life Examples
#include <stdio.h>

int main() {
    int dice = 1;

    while (dice <= 6) {
        if (dice < 6) {
            printf("No Yatzy\n");
        } else {
            printf("Yatzy!\n");
        }
        dice = dice + 1;
    }
    return 0;
}

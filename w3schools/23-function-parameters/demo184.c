// W3Schools, C Function Parameters
#include <stdio.h>

void calculateSum(int x, int y) {
    int sum = x + y;
    printf("The sum of %d + %d is: %d\n", x, y, sum);
}

int main() {
    calculateSum(5, 3);
    calculateSum(8, 2);
    calculateSum(15, 15);
    return 0;
}

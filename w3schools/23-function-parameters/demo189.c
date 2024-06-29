// W3Schools, C Function Parameters
#include <stdio.h>

int calculateSum(int x, int y) {
    return x + y;
}

int main() {
    int result1 = calculateSum(5, 3);
    int result2 = calculateSum(8, 2);
    int result3 = calculateSum(15, 15);

    printf("Result1 is: %d\n", result1);
    printf("Result2 is: %d\n", result2);
    printf("Result3 is: %d\n", result3);

    return 0;
}

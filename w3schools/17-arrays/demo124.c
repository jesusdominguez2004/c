// W3Schools, C Arrays, Array Size
#include <stdio.h>

int main() {
    int myNumbers[] = {10, 25, 50, 75, 100};
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

    printf("%d", length);

    // int -> 4 bytes
    // 4 * 5 array elements = 20 bytes
    // 20 bytes / 4 bytes = 5 array elements
    // 5 array elements -> array length
    return 0;
}

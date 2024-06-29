// W3Schools, C Scope
#include <stdio.h>

int x = 5;

void myFunction() {
    printf("%d\n", ++x);
}

int main() {
    myFunction();      // returns 6
    printf("%d\n", x); // returns 6
    return 0;
}

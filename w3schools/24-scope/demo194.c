// W3Schools, C Scope
#include <stdio.h>

int x = 5;  // global variable x

void myFunction() {
    int x = 22; // local variable x
    printf("%d\n", x);
}

int main() {
    myFunction();       // local variable x
    printf("%d\n", x);  // global variable x
    return 0;
}

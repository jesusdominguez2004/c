// W3Schools, C Functions
#include <stdio.h>

void myFunction() {
    printf("Some text in myFunction\n");
    myOtherFunction();
}

void myOtherFunction() {
    printf("Hey! Some text in myOtherFunction\n");
}

int main() {
    myFunction();
    return 0;
}

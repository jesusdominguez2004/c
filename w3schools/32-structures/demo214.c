// W3Schools, C Structures
#include <stdio.h>
#include <string.h>

struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];  // String
};

int main() {
    struct myStructure s1;

    strcpy(s1.myString, "Some text");

    printf("My string: %s", s1.myString);

    return 0;
}

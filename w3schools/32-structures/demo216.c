// W3Schools, C Structures
#include <stdio.h>

struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];  // String
};

int main() {
    struct myStructure s1 = {13, 'B', "Some text"};

    struct myStructure s2;

    s2 = s1;

    printf("%d %c %s", s2.myNum, s2.myLetter, s2.myString);

    return 0;
}

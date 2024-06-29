// W3Schools, C Structures
#include <stdio.h>
#include <string.h>

struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];  // String
};

int main() {
    struct myStructure s1 = {13, 'B', "Some text"};

    s1.myNum = 30;
    s1.myLetter = 'C';
    strcpy(s1.myString, "Something else");

    printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

    return 0;
}

// W3Schools, C User Input
#include <stdio.h>

int main() {
    int myNum;
    char myChar;

    printf("Type a number AND a character and press enter: \n");
    
    scanf("%d %c", &myNum, &myChar);

    printf("Your number is : %d", myNum);

    printf("Your character is : %c", myChar);

    return 0;
}

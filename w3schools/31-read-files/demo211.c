// W3Schools, C Read Files
#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("filename.txt", "r");

    char myString[100];

    if (fptr != NULL) {
        while(fgets(myString, 100, fptr)) {
            printf("%s", myString);
        }
    } else {
        printf("Not able to open the file.");
    }

    fclose(fptr);

    return 0;
}

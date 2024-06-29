// W3Schools, C Read Files
#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("loremipsum.txt", "r");

    if (fptr == NULL) {
        printf("Not able to open the file.");
    }

    fclose(fptr);

    return 0;
}

// W3Schools, C Create Files
#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("filename.txt", "w");

    fclose(fptr);

    return 0;
}

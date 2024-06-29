// W3Schools, C Write to Files
#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("filename.txt", "w");

    fprintf(fptr, "Some text");

    fclose(fptr);
    
    return 0;
}

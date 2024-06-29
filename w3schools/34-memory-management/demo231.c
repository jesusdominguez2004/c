// W3Schools, C Memory, Reallocate Memory
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1, *ptr2;

    ptr1 = malloc(4);

    ptr2 = realloc(ptr1, 8);

    if (ptr2 == NULL) {
        printf("Failed. Unable to resize memory");
    } else {
        printf("Success. 8 bytes reallocated at address %p \n", ptr2);
        ptr1 = ptr2;
    }

    free(ptr1);
    
    return 0;
}

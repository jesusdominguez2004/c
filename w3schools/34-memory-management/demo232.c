// W3Schools, C Memory, Deallocate Memory
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = malloc(sizeof(*ptr));

    if (ptr == NULL) {
        printf("Unable to allocate memory");
        return 1;
    }

    *ptr = 20;

    printf("Integer value: %d\n", *ptr);

    free(ptr);

    ptr = NULL; 
    
    return 0;
}

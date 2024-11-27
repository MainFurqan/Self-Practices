#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr= calloc(5, sizeof(int));

    // useing loop print the initialize values
    for(int i=0; i<5; i++) {
        printf("%d\n", ptr[i]);
    }

    free(ptr);  
}
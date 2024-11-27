// Allocate memory to store first five even number, then reallocate it to store the first six odd number
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    // Allocate the memory of five integer using ' calloc() ' 
    ptr = (int *) calloc(5, sizeof(int));

    // Ask to user enter the first five even number
    for (int i = 0; i < 5; i++) {
        printf("Even Number %d: ", i+1);
        scanf("%d", &ptr[i]);
    }

    // Reallocate the memory of six integer using ' realloc() '
    ptr = realloc(ptr, 6*sizeof(int));

    // Ask to user enter the first six odd number
      for (int i = 0; i < 6; i++) {
        printf("Odd Number %d: ", i+1);
        scanf("%d", &ptr[i]);
    }

    // free the allocated memory
    free(ptr);
    return 0;
}
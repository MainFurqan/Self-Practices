// Q: Allocate memory for 500 integers using calloc & then store first 500 natural numbers in that space.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Allocate the memory for 500 integer using calloc
    ptr = (int *)calloc(500, sizeof(int));

    // Check the memory allocation was successful 
    if(ptr==NULL) {
        printf("Error: Memory allocation failed.");
        return 1;
    }

    // Store the first 500 natural number in the allocated memory
    for(int i=0, j=1; i<500; i++, j++) {
        ptr[i] = j;
    }

    /*
    // Second way
    for(int i=0; i<500; i++) {
        ptr[i] = i+1;
    }
    */

    // Print the all stored values 
    for(int i=0; i<500; i++) {
        printf("%d\n", ptr[i]);
    }

    // Free the memory after use
    free(ptr);
    ptr = NULL; // for avoid dangling pointer
    return 0;
}
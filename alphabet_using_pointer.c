#include <stdio.h>

// Print Alphabet of English Letter using pointer 
int main() {
    char a = 'A';
    char *alphabet = &a;

    printf("[");
    printf("%c \t", *alphabet);
    for(int i = 1; i < 26; i++) {          // Using 'Pointer Arithmetic' increased the each 'char' in every iteration 
        printf("%c \t", *alphabet+i);
    }
    printf("]");
    return 0;
}
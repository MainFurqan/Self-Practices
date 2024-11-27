#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("fruits.txt", "r");          // When, We write wrong file name " fopen " function gives in return ' NULL ' factor

    if(fptr == NULL) {
        printf("File does not exists.");
    }
    else {
        printf("File is exists.");
    }

    fclose(fptr);
}
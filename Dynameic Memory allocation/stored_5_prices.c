// write a program to allocate the memory to store five prices
#include <stdio.h>
#include <stdlib.h>

int main() {
    float *ptr;
    ptr = malloc(5 * sizeof(float));

    // Ask to user enter the today prices 
    // Suger
    printf("Enter the prices of Suger: ");
    scanf("%f", &ptr[0]);
    // Flour
    printf("Enter the prices of Flour: ");
    scanf("%f", &ptr[1]);
    // Cooking Oil
    printf("Enter the prices of Cooking Oil: ");
    scanf("%f", &ptr[2]);
    // Banaspati 
    printf("Enter the prices of Banaspati: ");
    scanf("%f", &ptr[3]);
    // Rice
    printf("Enter the prices of Rice: ");
    scanf("%f", &ptr[4]);

    for(int i=0; i<5; i++) {
        printf("%f \t", ptr[i]);
    }    

    free(ptr);
}
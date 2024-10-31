#include <stdio.h>

// Function for calculation of percentage of product 
float percentage(float x) {
    float p;
    p = (18.0/100.0)*x;
    return p;
}


int main() {
    float a[3];                // Declared the array for storing the price of items 
    printf("Enter the price of 1-Item: ");   // Ask to user enter the price of 1-Item
    scanf("%f", &a[0]);
    printf("Enter the price of 2-Item: ");   // Ask to user entered the price of 2-Item
    scanf("%f", &a[1]);
    printf("Enter the price of 3-Item: ");   // Ask to user entered the price of 3-Item
    scanf("%f", &a[2]);
    printf("Final price of 1-Item with GST: %f \n", a[0] + percentage(a[0]));
    printf("Final price of 2-Item with GST: %f \n", a[1] + percentage(a[1]));
    printf("Final price of 3-Item with GST: %f \n", a[2] + percentage(a[2]));
    return 0;
}
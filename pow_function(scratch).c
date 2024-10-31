#include <stdio.h>

// First way to defined it.
float power_1(float x, int y) {
    float a = 1.0;  // Initialize to 1 for correct power calculation
    for(int i = 1; i <= y; i++) {
        a = a * x;  // Multiply by x in each iteration
    }
    return a;  // Return result as float
}

// Second way to defined it.
float power_2(float x, float y) {
    float a = x;
    for(int i = 1; i < y; i++) {
        a = a * x;
    }
    return a;
}


int main() {
    float base;
    int exponent;
    
    // Input base and exponent
    printf("Enter the base: ");
    scanf("%f", &base);
    
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    
    // Print the result
    printf("%.2f raised to the power of %d is %.2f\n", base, exponent, power_1(base, exponent));
    
    return 0;
}

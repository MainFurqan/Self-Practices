# include <stdio.h>

// Convert the Temperature 'celsius to fahrenheit'.
float celsius_to_fahrenheit(float c) {
    float f;
    f = c * 9/5 + 32;
    return f;
}

int main() {
    float c;
    // Ask to user enter the temperature in celsius
    printf("Enter Temperature(Celsius): ");
    scanf("%f", &c);
    // Call the function and print the output 
    printf("%f", celsius_to_fahrenheit(c));
}
# include <stdio.h>
# include <math.h>
// This function is define for taking 'square root'
float square_root(float n) {
    float s_r = pow(n, 1.0/2.0);
    return s_r;
}

int main() {
    float n;
    // Ask to user enter input
    printf("Enter any number: ");
    scanf("%f", &n);
    // I using the my define function 
    printf("The Square Root: %f ", square_root(n));
    /* 
    // We can also use built-in function
    printf("The Square Root: %f ", sqrt(n));
    */
}
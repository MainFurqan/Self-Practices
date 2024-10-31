// Q; Calculate the sum of all number between 5 and 50
#include <stdio.h>
float summation_1(float n);
float summation_2(float n);

// This function calculating using "for Loop"
float summation_1(float n) {
    float sum = 0;

    for(int i = 1; i <= n; i+=1) {
    sum += i;
    }
    return sum;
}

// This function calculating using "recursive"
float summation_2(float n) {
    if (n==1){
        return 1;
    }
    
    float sum = summation_2(n - 1) + n;
    return sum;
}


int main() {
    float n;
    // Ask to user enter any digit for sum
    printf("Enter a Digit: ");
    scanf("%f", &n);
    // Using the Recursive function for summation
    printf("The sum: %f", summation_2(n));
    /* 
    // Using the 'for loop' function for summation
    printf("The sum: %f", summation_1(n));
    */
}
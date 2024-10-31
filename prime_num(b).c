/*Q; prime number in range.*/
#include <stdio.h>

// define a function for calculation of prime number
int prime_num(int n) {
    if(n<=1) {
        return 0;              // For negative number
    }

    for (int i = 2; i * i <= n; i++) {
        if (n%i==0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int low_n;
    int upper_n;
    // Ask to user enter the lower number
    printf("Enter lower number: ");
    scanf("%d", &low_n);
    // Ask to user enter the upper number
    printf("Enter upper number: ");
    scanf("%d", &upper_n);

    // range of low_n to upper_n
    printf("The prime number from %d to %d. \n", low_n, upper_n);
    
    for (int i = low_n; low_n <= upper_n; low_n++) {
        if(prime_num(low_n)) {
            printf("%d \n", low_n);
        }
    }
}
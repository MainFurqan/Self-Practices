/*Q; Check that given number is prime or not prime number.*/
#include <stdio.h>
int main() {
    int n, isprime=1;
    // Ask to user enter your number
    printf("Enter number: ");
    scanf("%d", &n);

    // control to negative number
    if (n<=1){
        printf("It is not prime number.%d \n");        // negitve number never be prime number
    }

    // this loop takes the modulus '2 to sqrt(n)'  
    for(int i = 2; i * i <= n; i++) {
        if (n%i==0){
            isprime = 0;          // This mark or symbol is representation of not prime
            break;
        }
        
    }

    // for print of prime number
    if (isprime) {
        printf("%d is prime number.", n);
    } else {
        printf("%d is not prime number", n);
    }

    return 0;
}
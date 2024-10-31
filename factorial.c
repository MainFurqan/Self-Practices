// Q: Calculate the factorial of given number(n)
# include <stdio.h>
int main() {
    int n , factorial = 1;
    // Ask to user enter the input
    printf("Enter your input: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        factorial *= i;
        }
    printf("Factorial of %d is %d. \n", n, factorial);
}
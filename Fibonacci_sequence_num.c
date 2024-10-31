# include <stdio.h>
int fib_1(int n);
int fib_2(int n);
// for calculation of 'Fibonacci sequence number'
// 1: This function is built using 'Recursion'   
int fib_2(int n) {
    if (n == 0){
        return 0;
    } if(n == 1) {
        return 1;
    }
    int fib_m_one = fib_2(n-1);
    int fib_m_two = fib_2(n-2);
    int fib_n = fib_m_one + fib_m_two;
    return fib_n;
}
// 2; This function is built with using 'for Loop'
int fib_1(int n) {
    // Base state of 'Fibonacci sequence number'
    if (n == 0){
        return 0;
    } if (n==1){
        return 1;
    }
    
    int n_m_one = 1;               // consider fib(2) when,
    int n_m_two = 0; 
    int fib_n;
    for(int i = 2; i <= n; i++) {
        fib_n = n_m_one + n_m_two;
        n_m_two = n_m_one;              // update n_m_two with n_m_one
        n_m_one = fib_n;                // update n_m_one with fib_n
    }
    return fib_n;
}

int main() {
    int n;
    // Ask to user enter the input and check the Fibonacci sequence number
    printf(" Enter the number and check the Fibonacci sequence number; ");
    scanf("%d", &n);
    // Calling the recursive function
    printf("Fibonacci sequence number is %d ", fib_2(n));
    /* For calling of "Loop function"
    printf("Fibonacci sequence number is %d ", fib_1(n));*/
}
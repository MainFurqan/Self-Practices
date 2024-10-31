# include <stdio.h>

int main() {
    // Ask to user enter any number(n)
    int n;
    printf("Enter any number: " );
    scanf("%d", &n);

    // Table of any given number(n)
    for(int i = 1; i<=10; i+=1) {
        printf(" %d x %d = %d\n", n, i, n*i);
    }

    // Reverse Table of any given number(n)
    /*for(int i = 10; i>=1; i-=1) {
        printf(" %d x %d = %d\n", n, i, n*i);
    }*/

    return 0;
}
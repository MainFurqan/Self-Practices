#include <stdio.h>

int main() {
    int n;
    // Ast ot user enter the any natural(n) number
    printf("Enter any natural number: ");
    scanf("%d", &n);

    // calculate the sum of first natural(n) number of given nat
    int sum = 0;

    if (n>=1){
        for(int i = 1; i <= n; i+=1) {
        sum += i;
    }
    printf(" sum of given n %d", sum);
    }
    else {
        printf("Please enter Natural number: ");
    }
    
    // reverse number of given n
    while (n>=1)
    {
        printf("%d\n", n);
        n -= 1;
    }
    
    }

/*Q(b). Write a program to check if the given number is a
natural number.*/
    
/*int main() {
    int num;
    take the input from user
    printf(" Enter your number: ");
    scanf("%d", &num);
    if( num >= 1) {
        printf("%d, It is Natural Number.", num);
    } else                                                  //else if ( num < 1)
    {
        printf("%d, It is not Natural Number.", num);
    }
}*/
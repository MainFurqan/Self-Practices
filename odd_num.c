/*Math test of child about "Odd number"*/

#include <stdio.h>

int main() 
{
    int num;
    do 
    {
    // Ask to user enter the odd number
    printf("Enter any even number: \n");
    scanf("%d", &num);
    }
    // condition for validation
    while (num%2==0);
    {
        if (num%2!=0)
        { 
            while (num%2!=0)
            {
                printf("Invalid number(odd_number) \n");
                break;
            }
        }
    }
}
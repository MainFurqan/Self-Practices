#include <stdio.h>
#include <math.h>


/*Q(a). Write a program to check if a given number is
Armstrong number or not.*/

int main() {
    int armstrong_num;
    int original_arm_num;

    // Ask to user for input
    printf("Enter three digit armstrong number: ");
    scanf("%d", &armstrong_num);


    int hundred_digit = armstrong_num/100;                   // Calculate hundred digit
    int tens_digit = (armstrong_num/10)%10;                  // Calculate tens digit
    int one_digit = armstrong_num%10;                        // Calculate one digit

    original_arm_num = pow(hundred_digit, 3) + pow(tens_digit, 3) + pow(one_digit, 3);
    
    // Check armstrong number
    if (original_arm_num == armstrong_num) {
        printf("%d is armstrong number", armstrong_num);
    } else {
        printf("%d is not armstrong number", armstrong_num);
    }
}

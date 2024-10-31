#include <stdio.h>
void swap_2(int a, int b);
void swap_1(int *a, int *b);

// This function is also know as 'call by reference'
// Function to swap two numbers by passing pointers
void swap_1(int *a, int *b) {
    int temp = *a;  // Store the value of 'a' in 'temp'
    *a = *b;        // Set the value of 'a' to 'b'
    *b = temp;      // Set the value of 'b' to 'temp'
    printf(" In function a = %d and b = %d \n", *a, *b);
}

// This function is also know as 'call by value'
void swap_2(int a, int b) {
    int tem = a;
    a = b;                  // this function do not perform actual swaping in variables because its main integer provides the 'copy of value as argument'
    b = tem;
    printf(" In function a = %d and b = %d \n", a, b);
}

int main() {
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap_1(&x, &y);  // Call the swap function and pass addresses of 'x' and 'y'
    printf("Actual swap (After swap: x = %d, y = %d) \n", x, y);

    return 0;
}

#include <stdio.h>
// Function declaration for find of maximum number 
int max_number(int* x, int*y);

int main() {
    int x = 455;
    int y =23;
    // Calling the function and print the max number
    printf(" Max number is %d \n",max_number(&x, &y));
}

// Function for find of max number
int max_number(int* x, int*y) {
    if (*x > *y){
        return *x;    // Return 'x', If It's greater
    } else {
        return *y;    // Return 'y', If It's greater
    }
}
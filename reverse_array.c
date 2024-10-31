#include <stdio.h>
void print_arr(int a[], int n);
void reverse_array(int a[], int n);

// Define Function; which reverses the array
void reverse_array(int a[], int n) {
    int tem_1;
    for(int i = 0; i < n/2; i++) {
        tem_1 = a[i];           // Define the temporary variable
        a[i] = a[n-i-1];           // Always used this formula " n-i-1 " for reversing array
        a[n-i-1] = tem_1;
    }
}

// Define Function for print of Array
void print_arr(int a[], int n) {
    printf("[ ");
    for(int i = 0; i < n; i++) {
        printf("%d \t", a[i]);
    }
    printf("]");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    // call the reverse_array function
    reverse_array(arr, 5);
    // call the print_arr function
    print_arr(arr, 5);
    return 0;
}
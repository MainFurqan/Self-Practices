#include <stdio.h>
// Define Function for find the max number 
int max_n(int arr[],int col) {
    int max = arr[0];       // Initialize max variable with 'first element of arr'
    for(int j = 0; j<col; j++) {
        if (arr[j]>max) {         
            max = arr[j];      // Update max with greater element
            }
        }
    return max;
}

int main() {
    int arr[] = {2, 5, 4, 6, 8, 44};
    // Call the function & print the max number
    printf("Max number: %d", max_n(arr, 6));
}
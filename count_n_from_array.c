#include <stdio.h>
// Define Function for count of any number 
int count_n(int arr[],int col,int n) {
    int count;
    for(int i = 0; i<col; i++) {     
        if (arr[i]==n) {          // Iterated the all column and count the 'n'
            count++;
        }    
    }
    return count;
}

int main() {
    int n;
    //Ask to user enter the Input
    printf("Enter number(n): ");
    scanf("%d", &n);
    // Declare a array
    int arr[] = {4, 2, 2, 6, 7, 8, 9, 5, 4, 6, 3, 2, 1, 1, 3, 1};
    // Call the function & print the count
    printf("%d is count; %d", n, count_n(arr, 16, n));
    return 0;
}
#include <stdio.h>
void insert_element(int arr[], int *col,int element);
int print_array(int arr[],int col);

// Define function for insert element at the end of array 
void insert_element(int arr[], int *col,int element) {
    arr[*col]= element;
    (*col)++;  // increase the size of array for one element
}

// Define function for print of updated array
int print_array(int arr[],int col) {
    for(int i = 0; i < col; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {3, 5, 1, 4, 6, 8, 8, 9};
    int col = 8;
    int element;

    // Ask to user enter the insert elements in array
    printf("Enter insert element: ");
    scanf("%d", &element);

    //Call the function for Insert element at the end of array
    insert_element(arr, &col,element);
    
    // call the function for print update array
    print_array(arr,col);
    return 0;
}
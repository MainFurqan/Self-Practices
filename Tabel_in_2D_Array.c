#include <stdio.h>
void store_table(int arr[][10],int row,int column,int element);

int main() {
    int table[2][10];    // 2 rows for two element, 10 columns for each

    // First element multiplication 
    int element_1 = 2;
    // Call the function for store table
    store_table(table, 0, 10, element_1);
    
    // Print the multiplication of First element 
    printf("Multiplication of FIRST Element %d: \n", element_1);
    for(int i = 0; i < 10; i++) {
        printf(" %d x %d = %d \n", element_1, (i + 1), element_1 * (i + 1));
    }

    // Second element multiplication 
    int element_2 = 3;
    // Call the function for store table
    store_table(table, 1, 10, element_2);

    // Print the multiplication of second element
    printf("Multiplication of Second Element %d \n: ", element_2);
    for(int j = 0; j < 10; j++) {
        printf(" %d x %d = %d \n", element_2, (j + 1), element_2 * (j + 1));
    }
    
    return 0;
}


void store_table(int arr[][10],int row, int column, int element) {
    for(int i = 0; i < 10; i++) {
        arr[row][i] = element * (i + 1);
    }
}
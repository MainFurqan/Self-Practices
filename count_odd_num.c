# include <stdio.h>
// First way
// count the 'Odd number' from Array
int count_odd_num_1(int a[],int n) {
    int stor[n];              // for storing of odd number
    int count = 0;            // Count the odd number
    for (int i = 0; i < n; i++) {
        if (a[i]%2!=0){                // odd number
            stor[count] = a[i];        // Uses of index 'i' storing the values of element in 'stor Array'
            printf("%d \n", stor[count]); // print of odd value
            count++;   // increment in odd numbers
        }    
    }
    return count;  
}

// Second way
// count the 'Odd number' from Array
int count_odd_num_2(int a[],int n) {
    int count = 0;            // Count the odd number
    for (int i = 0; i < n; i++) {
        if (a[i]%2!=0){                // odd number
            count++;   // increment in odd numbers
        }    
    }
    return count;  
}
int main() {
    int age[] = {22, 54, 69, 11, 34};
    // Passing a 'array' and 'size of array' as argument in function
    printf("Count of Odd number;  %d", count_odd_num_1(age, 5));    // calling the first function
    /*
    // Also can call the second function 
    printf("Count of Odd number;  %d", count_odd_num_2(age, 5));
    */
    return 0;
}
#include <stdio.h>

// Enter the values in 'ARRAY' using pointer
int main() {
    int weight[5];
    int*w = weight;        // Note; Array is a pointer. Proving this line of code
    // int *w = weight[0];   // Also can uses this line instead of above line 
    // Both of meaning is same due to 'Array is pointer'

    // Now, I want put the input in every location of above array 
    for(int i = 0; i < 5; i++) {
        printf("%d Index:", i);
        scanf("%d", (w + i)); 
        //Can take input without using pointer
        // scanf("%d", &weight[i]);
    }
    // for represent of output also using the 'For Loop'
    for(int i = 0; i < 5; i++) {
        printf("%d Index: %d \n", i, *(w+i));
        // Can print output without using pointer
        // printf("%d Index: %d \n", i, weight[i]);
    }
}
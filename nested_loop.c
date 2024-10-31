/* Search on what a "nested loop" is & print this
pattern using it.

*****
*****
*****
*****                 */

#include <stdio.h>
int main() {
    int row = 4;                               // define the rows and columns
    int col = 5;
    // outer loop for rows
    for(int i=1; i<=row; i++) {
        // inner loop for columns 
        for (int j = 1; j <= col; j++)
        {
            printf("*");
        }
        printf("\n");               // Move to next line after each row
    }
}
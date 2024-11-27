#include <stdio.h>

int main() {
    // Open the file in write mode
    FILE *fptr = fopen("odd_numbers.txt", "w");

    if(fptr == NULL) {     // check for opening file error
        printf("Error");
        return 1;
    }

    // Ask the user to enter the upper limit (n)
    int n;
    printf("Enter an upper limit (n): ");
    scanf("%d", &n);

    // Write a header to the file
    fprintf(fptr, "Odd numbers from 1 to %d:\n", n);

    // condition for take of last odd number in variable last_odd_num
    int last_Odd_num;
    if (n%2==0)                  // This condition will used if ' n ' is even number
    {
        last_Odd_num = n-1;        
    }
    else {
        last_Odd_num = n;
    }
    

    // For checking of Odd Number I have the two way

    // First way:
    // // Loop through numbers from 1 to n and write odd numbers to the file 
    for(int i=1; i<=n; i++) {
        if(i%2!=0) {                             // Condition for checking of odd number
            if (i==last_Odd_num)
            {
                fprintf(fptr, "%d.", i);         // condition for the end of file with full stop(.)
            }
            else {
                fprintf(fptr, "%d,\t", i);
            }
        }
        else {                        
            continue;         // otherwise skip 
        }
    }

    /*
    // Second way:
    // Loop through numbers from 1 to n and write odd numbers to the file
    for (int i = 1; i <= n; i += 2) { // Increment by 2 for efficiency
        fprintf(fptr, "%d\t", i);
    }
    */

    printf("Successfully saved odd numbers from 1 to %d into 'odd_numbers.txt'.\n", n);
    fclose(fptr); // Close the file

    return 0;
}

// Q; Two number a & b are written in a file. write a program to replace them with sum of their number
#include <stdio.h>

int main() {
    FILE *fptr;
    // open the file in read mode for read of number
    fptr = fopen("sum_of_two_num.txt", "r");
    if (fptr == NULL)
    {
        printf("Error: Unable to open for reading");
        return 1;
        fclose(fptr);
    }
    

    int a, b;

    // Read the two integer from file
    if(fscanf(fptr, "%d %d", &a, &b) != 2) {       // validate file content
        printf(" %d %d ", a, b);
        printf("Error: The file do not have the valid integer.");
        return 1;
        fclose(fptr);
    }

    fclose(fptr); // close the file after reading

    FILE *fptr_2;

    // calculate the sum    
    int sum = a + b;

    // open the file in write mode to replace its content
    fptr_2 = fopen("sum_of_two_num.txt", "w");
    if (fptr_2==NULL){
        printf("Error: Unable to open for writing");
        return 1;
        fclose(fptr_2);
    }
    

    // Write the original number and their sum 
    fprintf(fptr_2, "sum = %d + %d\t", a, b);
    fprintf(fptr_2, "sum: %d", sum);
    
    // close the file after writing
    fclose(fptr_2);
}
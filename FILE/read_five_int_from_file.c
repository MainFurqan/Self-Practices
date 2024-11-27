#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("five_integer.txt", "r");

    int n;

    for (int i = 1; i <= 5; i++)
    {
        if ((fscanf(fptr, "%d", &n))==1)
        {
            printf("%d\t", n);
        }
        else {
            break;
        }
    }
    
   
    fclose(fptr);
}
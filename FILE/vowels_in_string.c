// Q: How many vowels in file(Vowels_in_string.txt) of Q(string)?
#include <stdio.h>

int main() {
    FILE *fptr;
    // open file in read mode
    fptr = fopen("vowels_in_Q.txt", "r");
    
    // Error checker during file opening 
    if (fptr == NULL) {
        printf("Error: Unable to read");
        return 1;
    }

    // initialize the variables   
    char a;
    int count=0;
    char vowels[] = "aeiouAEIOU";

    // Count the vowels in the file
    while ((fscanf(fptr, "%c", &a)) != EOF)   {
        for (int j = 0; vowels[j] != '\0'; j++) {
            if (vowels[j]==a) {
                count++;
            }
        }
    }

    fclose(fptr);   // close the file after reading


    FILE *fptr_2;
    // open the file again in append mode 
    fptr_2 = fopen("vowels_in_Q.txt", "a");

    if(fptr_2==NULL) {
        printf("Error: Under for appending.");
        return 1;
    }

    // Append the vowels count to the file
    fprintf(fptr_2, "\n\n Total vowels in above Q: %d",count);
    
    // close the file after appending
    fclose(fptr_2);
}
#include <stdio.h>
#include <string.h>

// Defined a Function for "Find the length of string"
int length_string(char arr[]) {
    int count = 0;          // Declared a variable for count of a length

    // Remove the newline character '\n', If it is exist
    int len = strlen(arr);      // ' strlen ' counts the length of string include space and newline '\n' char
    if (arr[len-1]=='\n') {
        arr[len-1]='\0';     // Replace newline with null char '\0'
    }


    for(int i = 0; arr[i]!='\0'; i++) {    // when iterator(i) reach equal to null_char(\0), It finishes
        if (arr[i]==' ') {
            continue;              // iterator is equal to space then skip it       
        }
        else {               
            count++;   
        }
    }
    return count; 
}

/*
int main() {
    char arr[50];

    // Ask to user enter your string
    printf("Enter input:");
    fgets(arr, 50, stdin);
    
    // print and call the function for find the length of string
    printf("Length of string(space is not count): %d ", length_string(arr));
}
*/

// We can also uses the Built-in-function for find the 'length of string'


int main() {
    char arr[50];

    // Ask to user enter your string
    printf("Enter input:");
    fgets(arr, 50, stdin);
    
    // Call the Built-in-function ' strlen ' 
    printf("Length of string(space is count): %d ", strlen(arr));  // It count the space and newline char '\n' as well
}


// Therefore, I Defined a function. Which do not count the 'space' and newline char '\n' as well. you can see top of this code

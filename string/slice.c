#include <stdio.h>

// Define a Function for slicing of string 
void slice(char arr[], int s_p, int e_p) {
    while (s_p<=e_p) {            // ' s_p ' mean start point and ' e_p ' mean end point
       printf("%c",arr[s_p]); 
       s_p++;
    }
    arr[s_p] = '\0';        // Added the null char(\0) at end of char array for indication of string
}

int main() {
    char arr[] = "HelloWorld";
    int s = 2;
    int e = 7;
    slice(arr, s, e);     // Call the Function for slicing
}
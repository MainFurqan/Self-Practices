#include <stdio.h>
// Define the function for print of string
void print_string(char arr[]) {
    for(char i=0; arr[i]!='\0'; i++) { 
        printf("%c", arr[i]);           // printing string 'char by char' until reach '\0'
        }  
    printf("\t");
}

// Printed the string 'char by char'
int main() {
    char First_name[] = {'F', 'u', 'r', 'q', 'a', 'n', '\0'};  
    char Second_name[] = {'A', 'r', 's', 'h', 'a', 'd', '\0'};

    // Call the Function for print of:
    // first name
    print_string(First_name);
    // Second name
    print_string(Second_name);
    return 0;
}

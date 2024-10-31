#include <stdio.h>

// String format specifier 
int main() {
    // Print the Full Name using 'scanf'
    /*
    char First_name[8];
    char Second_name[8];


    // Ask to user enter your input:
    // First Name 
    printf("What are your Full name: ");
    scanf("%s", First_name);          
    // Second name
    printf("What are your Second name: ");
    scanf("%s", Second_name);
    // print First and Second Name
    printf("Full Name: %s %s", First_name, Second_name);
    */

    // Print the Full Name of User using 'fgets'
    char Full_name[20];

    // Ask to user enter your input:
    // Full Name 
    printf("What are your Full name: ");            
    fgets(Full_name, 30, stdin);        // 'scanf' is space sensitive. Therefore, we uses the 'fgets'

    puts(Full_name);               // Instead of 'print("\n")' we use the 'puts' function because it moves the curser next line automatically

}
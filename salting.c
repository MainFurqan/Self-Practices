#include <stdio.h>
#include <string.h>

void salting(char password[50]) {
    char salt[] = "123";
    char new_password[50];
    strcpy(new_password,password);     // pass the password into new_password
    strcat(new_password,salt);      // concat the new_password and salt
    puts(new_password); 
}

// salting after receiving password from user
int main() {
    char password[50];

    printf("Enter your password: ");    // Ask to user enter your password
    scanf("%s", password);   // 'scanf' used instead of 'fgets' because next line(\n) character 

    salting(password);
}

// Salting is a technique uses in cyber security for safe of passwords.  
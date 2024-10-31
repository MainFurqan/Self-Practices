#include <stdio.h>
void low_uppercase_vice_versa(char str[]) {
    char vice_versa[100];

    for (int i = 0; str[i]!='\0'; i++) {

        // The difference between the ASCII values of a lowercase letter and its corresponding uppercase letter is always 32.
        if ((int)str[i]>=97 && (int)str[i]<=122) {    // converting lowercase letter into uppercase letter
            vice_versa[i] = str[i]-32;            
            printf("%c", vice_versa[i]);
        } else if ((int)str[i]>=65 && (int)str[i]<=90) {   // converting uppercase letter into lowercase letter
            vice_versa[i] = str[i]+32;
            printf("%c", vice_versa[i]);
        } else {                            // Any other digit or space is there as it.
            vice_versa[i] = str[i];
            printf("%c", vice_versa[i]);
        }

    }
}

int main() {
    char str[100];

    // Ask to user Enter you string
    printf("Enter your string: ");
    fgets(str, 100, stdin);
    
    // Call the Function for converting Alphabet
    low_uppercase_vice_versa(str);
}
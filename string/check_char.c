#include <stdio.h>

// Define a Function for check character
void check_char(char into[], char alphabet) {    // Taking the a string and character as a argument
    for(int i = 0; into[i]!='\0'; i++) {
        if (into[i] == alphabet) {          // Check given alphabet is exists or not 
            printf("Yes, It is exists.");
            return;
        }
    }
    printf("No, It is not exists.");
}

int main() {
    char into[] = "I am Furqan. I am student of Computer Science. My age is 20 year old.";
    char alphabet;

    // Ask to user enter input
    printf("Enter your character: ");
    scanf("%c", &alphabet);

    // Call the Function 
    check_char(into, alphabet);
}
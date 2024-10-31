#include <stdio.h>
void lowercase_uppercase(char low[]) {   // Taking the lowercase string
    char uppercase;

    printf("[");
    for (int i = 0; low[i]!='\0'; i++) {
        uppercase = low[i]-32;            // The difference between the ASCII values of a lowercase letter and its corresponding uppercase letter is always 32.
        printf(" %c \t", uppercase);
    }
    printf("]");
}

int main() {
    char low[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    // Call the Function for convert lowercase Alphabet to uppercase Alphabet
    lowercase_uppercase(low);
}
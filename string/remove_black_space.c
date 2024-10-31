#include <stdio.h>

void print_string(char str[]) {
    char x;
    
    for(int i = 0; str[i] != '\0'; i++) {
        x = str[i];
        if(x == ' ') {
            continue;
        }
        else {
            printf("%c", x);
        }
    }
}


int main() {
    char str[100];

    // Ask to user enter your input
    printf("Enter your string: ");
    fgets(str, 100, stdin);

    // call the function
    print_string(str);
}
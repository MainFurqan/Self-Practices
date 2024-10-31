#include <stdio.h>
#include <string.h>

int main() {
    char arr[50];
    char ch;
    int i = 0;

    while (ch != '\n') {
        scanf("%c", &ch);    // Ask to user enter your input char by char
        arr[i] = ch;
        i++;
    }

    arr[i] = '\0';      // Null char(\0) is adds at the end of char array.
    puts(arr);

}
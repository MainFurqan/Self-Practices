#include <stdio.h>

// Define a function for 'count of vowels' 
int count_vowels(char str[]) {
    char vowels[] = {'a', 'e', 'i', 'o', 'u','\0'};  // Vowels Words
    int count = 0;

    for(int i=0;vowels[i]!='\0';i++) {       // Outer loop taking vowel one by one
        for (int j = 0;str[j]!='\0'; j++) {  // Inner loop taking the string
            if (vowels[i] == str[j]) {      // If vowels exists in string then
                count ++;               // increase the count
            }
        }
    }
    return count;
}

int main() {
    char str[50];                  // Declare the char array 
    
    // Ask to user enter input
    printf("Enter your string: ");
    scanf("%s", str);

    // Type of casting  
    int vowels = count_vowels(str);    // Because, we printing the count value(int) while input is a character array
    printf("%d", vowels);
}
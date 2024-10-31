#include <stdio.h>
#define ASCII_Size 256       // define the ASCII Size character

// Define a function for 'Find the frequent character'  
char frequent_char(char str[]) {
    int freq[ASCII_Size] = {0};         // Declared the a int array for storing frequency of ASCII number
    int max_freq = 0;             // Declared a int variable for storing most frequent number
    char max_char;            // Declared a char variable for stored of most frequent character


    for (int i=0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            continue;               // If iterator(i) is equal to space then skip it 
        }
        freq[(int)str[i]]++;       // Increment the frequency of the current character
    }


    for(int i = 0; i < ASCII_Size; i++) {
        if (freq[i] > max_freq) {          // If, the value of freq[i] is greater than max_freq then,
            max_freq = freq[i];            // update the max_freq
            max_char = (char)i;            // update the max_char
        }
    }

    return max_char;
}


int main() {
    char str[100];
    // Ask to user enter your input
    printf("Enter your string: ");
    fgets(str, 100, stdin);

    // Call the function 
    char most_frequent = frequent_char(str);
    printf("Most Frequent Character: %c ", most_frequent); // print the most frequent character

    return 0;
}
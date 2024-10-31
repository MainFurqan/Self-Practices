#include <stdio.h>

int main() {
    /*
    char arr_a[] = "Furqan arshad";     // 'pointer char array' is not reinitialized */ 
    char *arr = "Furqan arshad";     // 'pointer char array' is a reinitialized   
    puts(arr);
    arr = "Muhammad Furqan Arshad";
    printf(arr);
    
}
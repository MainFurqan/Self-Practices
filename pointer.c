# include <stdio.h>

int main() {
    float weight;
    float *ptr = &weight;
    *ptr += 51.0;
    
    printf("%p \n", ptr);       // "%p" is uses for pointer variable
    printf("%u \n", ptr);       // "%u" is uses for print of non-hexadecimal address
    printf("%u \n", &ptr);      // this syntax is uses for 'address of pointer variable'
    printf("%f \n", *ptr);      // The * operator is known as the 'value of address' and  'dereference operator' in the context of pointer variables.
    printf("%u \n", &(weight)); // this syntax prints the address of any variable
    printf("%f \n", weight);
}
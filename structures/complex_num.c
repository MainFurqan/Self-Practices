#include <stdio.h>

struct complex_num
{
    int real;
    char imagery[10];
};

int main() {
    struct complex_num v = {4, "7i"};

    printf("Real Part: %d \n", v.real);
    printf("Imagery Part: %s \n", v.imagery);
}
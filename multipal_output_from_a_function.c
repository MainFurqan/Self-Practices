# include <stdio.h>
void multipal_work();

int main() {
    int a = 5;
    int b = 23;
    int sum, product, avg;
    multiple_work(a, b, &sum, &product, &avg);
    printf("sum = %d, product = %d, avg=%d \n", sum, product, avg);
    return 0;
}

// A function can given only one output but when we need multiple outputs we uses the 'pointers'   

void multiple_work(int a, int b, int* sum, int* product, int* avg) {
    *sum = a+b;
    *product = a*b;
    *avg = (a+b)/2;
}
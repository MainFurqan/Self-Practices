#include <stdio.h>
int perimeter_rect(int l, int w, int* p);

int main() {
    int l, w, p;
    printf("Enter the length(l); ");           // Ask to user enter the Length of Rectangle
    scanf("%d", &l);
    printf("Enter the width(w); ");            // Ask to user enter the width of Rectangle
    scanf("%d", &w);
    perimeter_rect(l, w, &p);                  // Call the function
    printf("Perimeter of Rectangle: %d \n", p); // represent the perimeter of rectangle
    return 0;
}

// Define the function for calculation of Perimeter
int perimeter_rect(int l, int w, int* p) {
    *p = 2*(l + w);
}
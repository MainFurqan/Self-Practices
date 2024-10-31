#include <stdio.h>
#include <math.h>
// define a function for calculation of "Area of square"
float area_of_square(float x) {
    printf(" Area of Square %f \n", pow(x, 2));
}
// define a function for calculation of "Area of Rectangle"
float area_of_rectangle(float x,float y) {
    printf(" Area of Rectangle %f %f \n", x * y);
}
// define a function for calculation of "Area of Circle"
float area_of_circle(float r) {
    float pi = 3.14;
    printf(" Area of Circle %f \n", pi*pow(r, 2));
}

int main() {
    float l;
    float r;
    float w;
    float L;
    // Ask to user enter the "Length" for calculation of area of square
    printf("Enter only 'Length' for calculation of 'area of square': ");
    scanf("%f", &l);
    
    // Ask to user enter the "weight" for calculation of area of rectangle
    printf("Enter 'weight' and 'Length' for calculation of area of rectangle: ");
    scanf("%f %f", &w, &L);
    
    // Ask to user enter the "radius" for calculation of area of circle
    printf("Enter 'radius' for calculation of area of circle: ");
    scanf("%f", &r);
    if(l){
        area_of_square(l); 
    } if(l, w) {
        area_of_rectangle(l, w); 
    } if(r) {
        area_of_circle(r);
    }    
    return 0;
}
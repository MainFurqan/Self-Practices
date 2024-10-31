# include <stdio.h>
float percentage(float o_m,float t_m) {
    float p;
    p = o_m/t_m * 100;
    return p;
}

int main() {
    float o_m;
    float t_m;
    // Ask to user enter your marks
    printf("Enter your Obtain marks; ");                     
    scanf("%f", &o_m);
    printf("Enter Total marks; ");
    scanf("%f", &t_m);
    // call the function and print output
    printf("Percentage is: %f \n", percentage(o_m, t_m));
}
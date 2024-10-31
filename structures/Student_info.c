#include <stdio.h>
#include <string.h>

// Defining the structure 
typedef struct Student_info {
    char name[100];
    int roll_num;
    float CGPa;
} stu_info;

/*
// Defining the structure with out ' typedef ' 
struct Student_info {
    char name[100];
    int roll_num;
    float CGPa;
};
*/

// Define the Function for entering input in structure
void enter_info(stu_info S[20], int n) {
    printf("Enter Personal Information: \n");
    for(int i=0;i<n;i++) {
        printf("Student %d \n", i+1);
        printf("Name: ");
        scanf("%s", S[i].name);
        printf("Roll Number: ");
        scanf("%d", &S[i].roll_num );
        printf("CGPa: ");
        scanf("%f", &S[i].CGPa);
    }
}
// Displaying the structure
void display_structure(stu_info S[100], int n) {
    for(int i=0; i<n; i++) {
        printf("Name: %s \n", S[i].name);
        printf("Roll Number: %d \n", S[i].roll_num);
        printf("CGPa: %.2f \n", S[i].CGPa);
    }
}


int main() {
    // struct student_info CS_VU[100];         // Define a structure Array
    stu_info CS_VU[100]; 
    int num_student;

    // Ask to user enter number of student
    printf("How many students: ");
    scanf("%d", &num_student);

    // Call the function for:
    // Ask to user enter your information
    enter_info(CS_VU,num_student);
    // Display Output 
    display_structure(CS_VU,num_student);
}
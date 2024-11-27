#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("student_info.pdf", "w"); // Open file in write mode

    if (fptr == NULL) {
        printf("Error: Unable to open file.\n");
        return 1; // Exit if file cannot be opened
    }

    // Ask the user to enter the total number of students
    int total_student;
    printf("Total Students: ");
    scanf("%d", &total_student);
    fprintf(fptr, "Total Students: %d\n\n", total_student); // Store total number in the file
    getchar(); // Clear newline left in input buffer by scanf

    // Loop through each student
    for (int i = 1; i <= total_student; i++) {
        printf("\n--- Enter details for Student %d ---\n", i); // Display in terminal
        fprintf(fptr, "Student %d:\n", i);                    // Write to file

        // Input Student Name
        char name[50];
        printf("Name: ");
        fgets(name, sizeof(name), stdin);
        fprintf(fptr, "Name: %s", name);

        // Input Roll Number
        int Roll_num;
        printf("Roll Number: ");
        scanf("%d", &Roll_num);
        fprintf(fptr, "Roll Number: %d\n", Roll_num);

        // Input CGPA
        float cgpa;
        printf("Latest CGPA: ");
        scanf("%f", &cgpa);
        fprintf(fptr, "CGPA: %.2f\n\n", cgpa);

        getchar(); // Clear newline left in input buffer by scanf
    }

    printf("\nInformation successfully saved to 'student_info.txt'.\n");
    fclose(fptr); // Close the file

    return 0;
}

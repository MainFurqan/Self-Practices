#include <stdio.h>

int main() {
    char input[50];   // Buffer to hold the input (distance with unit)
    float distance;   // To store the numeric value of the distance
    char unit[10];    // To store the unit (e.g., "km")
    float time;       // To store the time in hours
    float velocity;   // To store the calculated velocity
    char vel_unit[] = "km/h"; // Output unit for velocity

    // Ask the user to enter the covered distance with its unit (e.g., "4.5 km")
    printf("Enter your covered distance(km): ");
    fgets(input, sizeof(input), stdin);  // Read the input from the user

    // Use sscanf to parse the float and string from the input
    sscanf(input, "%f%s", &distance, unit);

    // Ask the user to enter the time taken in hours
    printf("Enter the time taken (hours): ");
    scanf("%f", &time);

    // Calculate velocity
    velocity = distance / time;

    // Display the calculated velocity
    printf("Velocity: %.2f %s\n", velocity, vel_unit);

    return 0;
}

/*Implement a C program to accept the following details from the user using scanf():
• Age
• Height (in meters)
• Grade (single character)
Display all the entered values clearly using printf().*/    
#include <stdio.h>

int main() {
    // Declare variables of appropriate primitive data types
    int age;
    float height;
    char grade;

    // Accept user input for age, height, and grade
    printf("Enter Age: ");
    scanf("%d", &age);
    
    printf("Enter Height (in meters): ");
    scanf("%f", &height);
    
    printf("Enter Grade (single character): ");
    scanf(" %c", &grade); // Note the space before %c to consume any leftover newline character

    // Display the entered values
    printf("\nEntered Details:\n");
    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
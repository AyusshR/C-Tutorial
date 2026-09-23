/*Implement a C program to accept three integer values and calculate their average.
Ensure that the average is displayed as a decimal value, even when all input values are
integers.
Example:
Input: 10 15 20
Output: Average = 15.00*/
#include <stdio.h>

int main() {
    // Declare variables for the three integers and their average
    int num1, num2, num3;
    float average;

    // Accept user input for the three integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    
    printf("Enter the third integer: ");
    scanf("%d", &num3);

    // Calculate the average
    average = (num1 + num2 + num3) / 3.0;

    // Display the average
    printf("Average = %.2f\n", average);

    return 0;
}
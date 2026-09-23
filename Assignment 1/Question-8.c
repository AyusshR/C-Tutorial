/*An employee's monthly salary consists of:
• Basic Salary
• Allowance
• Bonus
Implement a C program to accept these values and calculate the final salary.
Formula:
Final Salary = Basic Salary + Allowance + Bonus
Display the final salary up to two decimal places.*/
#include <stdio.h>

int main() {
    // Declare variables for basic salary, allowance, bonus, and final salary
    float basicSalary, allowance, bonus, finalSalary;

    // Accept user input for basic salary, allowance, and bonus
    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);
    
    printf("Enter Allowance: ");
    scanf("%f", &allowance);
    
    printf("Enter Bonus: ");
    scanf("%f", &bonus);

    // Calculate the final salary
    finalSalary = basicSalary + allowance + bonus;

    // Display the final salary up to two decimal places
    printf("Final Salary: %.2f\n", finalSalary);

    return 0;
}
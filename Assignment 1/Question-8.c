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
    float basicSalary, allowance, bonus, finalSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);
    
    printf("Enter Allowance: ");
    scanf("%f", &allowance);
    
    printf("Enter Bonus: ");
    scanf("%f", &bonus);

    finalSalary = basicSalary + allowance + bonus;

    printf("Final Salary: %.2f\n", finalSalary);

    return 0;
}
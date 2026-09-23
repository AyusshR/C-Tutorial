/*Implement a C program to accept two integers and calculate:
• Quotient
• Remainder
Use appropriate arithmetic operators and display both results.*/
#include <stdio.h>

int main() {
    int a,b;
    a = 10, b = 20;
 
    int Quotient = b/a;

    int Remainder = b%a;

    printf("Quotient by dividing two variables: %d\n", Quotient);
    printf("Remainder by dividing two variables: %d\n", Remainder);
    
    return 0;
}
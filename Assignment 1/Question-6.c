/*Implement a C program to accept two integers and calculate:
• Quotient
• Remainder
Use appropriate arithmetic operators and display both results.*/
#include <stdio.h>

int main() {
    int a,b;
    a = 10, b = 20;
 
    //Calculating the Quotient//
    int Quotient = b/a;

    //Calculating the Remainder//
    int Remainder = b%a;

    //Printing the output//
    printf("Quotient by dividing two variables: %d\n", Quotient);
    printf("Remainder by dividing two variables: %d\n", Remainder);
    
    return 0;
}
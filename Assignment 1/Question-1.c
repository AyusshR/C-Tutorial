/* Implement a C program to store and display the following information using appropriate
primitive data types */
#include <stdio.h>

int main() {
    int age = 17;
    float Percentage = 98;
    char Student_ID[] = "26CSUXXX";
    char grade = 'A';

    printf("Student ID: %s\n", Student_ID);
    printf("Age: %d\n", age);
    printf("Percentage: %.2f%%\n", Percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
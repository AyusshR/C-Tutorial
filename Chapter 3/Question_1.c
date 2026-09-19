/*Write a program to check if a student passed or failed
  marks > 30 is PASS  marks <= 30 is FAIL */
#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks <= 30){
        printf("You Failed");
    }
    else if (marks > 30 && marks < 100){
        printf("you Passed");
    }
    else {
        printf("invalid marks");
    }
    /*Checking with ternary statements
    marks > 30 ? printf("You Passed") : printf("You Failed");*/
    return 0;
}
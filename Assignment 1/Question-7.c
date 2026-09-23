/*Implement a C program to accept marks obtained in five subjects, where each subject is out
of 100.
Calculate and display:
• Total Marks
• Percentage
Ensure that the percentage is displayed correctly as a decimal value.*/
#include <stdio.h>

int main(void) {
    float Mathematics, Physics, FOCP, PSDT, BME;

    printf("Marks in Maths : \n");
    scanf("%f", &Mathematics);
    printf("Marks in Physics : \n");
    scanf("%f", &Physics);
    printf("Marks in FOCP : \n");
    scanf("%f", &FOCP);
    printf("Marks in Maths : \n");
    scanf("%f", &PSDT);
    printf("Marks in BME : \n");
    scanf("%f", &BME);

    printf("Total Percentage : %.2f %%\n", (Mathematics + Physics + FOCP + PSDT + BME)/5);

    return 0;
}
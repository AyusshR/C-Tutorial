/*Implement a C program to accept the temperature in Celsius and convert it into Fahrenheit.
Formula:
Fahrenheit = (Celsius × 9 / 5) + 32
Ensure that the output is displayed as a decimal value.
Example:
Input: 25
Output: 77.00 °F*/
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit: %.2f F\n", fahrenheit);

    return 0;
}
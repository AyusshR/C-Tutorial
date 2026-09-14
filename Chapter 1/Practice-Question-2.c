// Write a program to calculate a Area of a Circle //

#include <stdio.h>

int main(void) {
    float x;
    printf("Enter the Radius of the circle : ");
    scanf("%f", &x);
    printf("Area of the circle is : %.2f", 3.14 * x * x );
    return 0;
}
/* If u use .2f in Scanf function it errors out if u give it 
a input of more than 2 decimal places */
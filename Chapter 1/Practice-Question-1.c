//Write a program to calculate area of a square or a rectangle based on user input//

#include <stdio.h>
int main() {
    int x,y;
    printf("Please Enter the Length of the rectangle: ");
    scanf("%d", &x);
    printf("Please Enter the Width of the rectangle: ");
    scanf("%d", &y);
    printf("Area of the rectangle is : %d", x*y);
    return 0;
}
/* If you wanna print a float value use %f for it 
and if you just wanna print till 2 decimal points use %.2f  */

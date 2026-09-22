// Write Functions to calculate area of a square, a circle & a rectangle
#include <stdio.h>
#include <math.h>

void areaSquare(float num) {
    printf("Area of the square is : %f", pow(num, 2));
}
/*OR void areaSquare(float num) {
    return num * num; } */


void areaRectangle(float num1,float num2) {
    printf("Area of the rectangle is : %f", num1 * num2);
}

void areaCircle(float num) {
    printf("Area of the circle is : %f", 3,14 * pow(num, 2));
}

int main() {

}
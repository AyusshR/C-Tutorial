/* Use library functions to calculate the square of a number given by the user 
 Use Power from <math.h> library --> pow(number,2) gives number^2 */
 #include <stdio.h>
 #include <math.h>

 void calculatePower(float num) {
    printf("Square of %.1f is : %.1f", num, pow(num,2));
 }

int main() {
    float num;
    printf("Enter the number : ");
    scanf("%f", &num);
    
    calculatePower(num);

    return 0;
}
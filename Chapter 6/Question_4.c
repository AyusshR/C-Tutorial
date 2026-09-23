/*Write a function to calculate the sum, product & average of 2 numbers
Print that average in the main function*/
#include <stdio.h>

void printAvg(float *a, float *b){
    float sum = (*a + *b);
    float product = (*a * *b);

    printf("Average of %.2f and %.2f is : %.2f\n", *a, *b, (*a + *b)/2);
}

int main(){
    float x = 3.0;
    float y = 4.0;
    printAvg(&x, &y);

    printf("Average of %.2f and %.2f is : %.2f\n", x, y, (x + y)/2);
    return 0;
}
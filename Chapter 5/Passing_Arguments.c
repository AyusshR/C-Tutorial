#include <stdio.h>

void calculator(float value) {
    value = value + (0.18 * value);
    printf("Your Final Price is : %f", value);
}

int main() {
    float value;
    printf("Your item amount : \n");
    scanf("%f", &value);

    /*No matter how many times you change the varaible in the function
     it Won't affect the value of the variable outside it */
    calculator(value);
    printf("value is : %f\n", value); 

    return 0;
}
//Changing the values in function don't change the value in calling function
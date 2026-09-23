#include <stdio.h>

//Call by value
void square(int n){
    n = n*n;
    printf("Square of n is : %d\n", n);
}

//Call by refrence
void _square(int *n){
    *n = (*n) * (*n);
    printf("Square of n is : %d\n", *n);
}

int main (){
    int number = 4;
    square(number);
    printf("number is : %d\n", number);

    _square(&number);
    printf("number is : %d\n", number);

    return 0;
}
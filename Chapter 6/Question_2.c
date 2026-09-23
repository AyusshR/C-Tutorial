//Swap value of two variables a & b using a function
#include <stdio.h>

//Call by value
void swap(int a, int b){
    int t;
    t = a;
    a = b;
    b = t;
    printf("%d %d\n", a, b);
}

//Call by refrence
void _swap(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
    printf("%d %d\n", *a, *b);
}

int main(){
    int x = 10, y = 5;
    swap(x, y);
    printf("%d %d\n",x ,y);

    _swap(&x, &y);
    printf("%d %d\n",x ,y);

    return 0;
}
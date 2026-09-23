//Figure out the output
#include <stdio.h>

int main(){
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;

    printf("%d", x); // 0
    printf("%d", *ptr); // 0

    *ptr += 5;
    printf("%d", x); // 5
    printf("%d", *ptr); // 5

    (*ptr)++;
    printf("%d", x); // 6
    printf("%d", *ptr); // 6

    return 0;
}
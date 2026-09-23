//A variable that stores the momory address of another pointer
#include <stdio.h>

int main(){
    int x = 2;
    int *ptr = &x;
    int **pptr = &ptr;

    printf("Memory address of *ptr is : %p", pptr);

    return 0;
}
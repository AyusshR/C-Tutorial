#include <stdio.h>

int main(){
    int age;
    int *ptr = &age;

    //How to print address
    printf("%p\n", &age); //prints a hexadecimal value of the memory address of age
    printf("%u\n", ptr); //prints a unsigned interger of the value stored in ptr
    printf("%u\n", &ptr); //prints a unsigned interger memory address of ptr

    //How to print the value stored at that addresss
    printf("%d", age);
    printf("%d", *ptr); // '*' means value at address
    printf("%d", *(&age)); // shows the value stored at that memory address

    return 0;
}
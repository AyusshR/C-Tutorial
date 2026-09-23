// Basics of Pointer
#include <stdio.h>

int main(){
    int age = 22; //variable age got assigned a memory address
    int *ptr = &age; //we are accessing the memory address where age variable is stored
    int _age = *ptr; //putting the variable address stored in ptr into _age
    
    printf("%d",_age);
    return 0;
}
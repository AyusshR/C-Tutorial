//Will the address output be same?
#include <stdio.h>

void printAddress(int n){
    printf("%u\n", &n); 
}

//they will not be the same as the function creates a new variable and stores the value there

int main(){
    int n = 4;

    printf("%u\n", &n);
    printAddress(n);

    return 0;
}
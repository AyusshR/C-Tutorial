#include <stdio.h>

//Basically u can save a block of code in a single line and use it whenever u need

//Declaration/Prototype
void printHello ();

int main(){
    printHello(); //Function call
    return 0;
}

//Function Definition
void printHello (){
    printf("Hello World\n");
}
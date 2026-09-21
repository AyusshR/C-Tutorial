/*Write a function that prints Hola if the user is Spanish
and Bonjour if the user is French */
#include <stdio.h>
#include <string.h>

//Just use single Char character dumbass you haven't studied pointers yet
void printHola(){
    printf("Hola! Como estas?");
    printBonjour();
}
void printBonjour(){
    printf("Bonjour! Vous allez bien ?");
    printHola();
}

int main(){
    char Language[42];
    printf("Which language do u speak : ");
    scanf("%41s", Language);

    if (strcmp(Language, "Spanish") == 0)
    {
       printHola();
    }
    else if (strcmp(Language, "French") == 0)
    {
        printBonjour();
    }
    else {
        printf("Stop speaking Klingon");
    }
    
    return 0;
}
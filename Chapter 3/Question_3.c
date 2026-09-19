// Write a program to check if the input character is upper case or not
#include <stdio.h>

int main(){
    char ch;
    printf("Enter a Character: ");
    scanf("%c", &ch);

    //Each character in the english alphabet is assigned a ASCII value 
    if (ch > 'A' && ch < 'Z'){
        printf("Character is upper case");
    }
    else if (ch > 'a' && ch < 'z'){
        printf("Character is lower case ");
    }
    else {
        printf("Character is not valid");
    }
    return 0;
}
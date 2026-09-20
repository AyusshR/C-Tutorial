#include <stdio.h>

int main(){
    //increament operator
    /* ++i first increase the value of i and then use it
       i++ first use it and then increase the value */
    for (int i=1; i<=50; i++){
        printf("%d. ", i);
        printf("Hello World\n", i);
    }
    for (float i=1.00; i<=50.00; i++){
        printf("%f \n", i);
    }
    for ( char ch = 'a'; ch <= 'z'; ch++ ){
        printf("%c\n", ch);
    }
    return 0;
}
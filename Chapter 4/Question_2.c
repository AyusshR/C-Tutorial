//Print the number from 0 to n if n is given by the user
#include <stdio.h>

int main(void){
    int n,i = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
    
}
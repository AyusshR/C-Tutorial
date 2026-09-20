//Print the sum of First n natural numbers then print them in reverse
#include <stdio.h>

int main(void){
    int n,sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for ( int i = 1; i <= n; i++){
        //printf("%d\n", sum = sum + i);
        sum = sum + i;
    }
    printf("Sum is : %d\n", sum);

    for (int i = n; i >= 0; i--)
    {
        printf("%d\n", i); 
    }
    
    return 0;
}

//OR

int main(void){
    int n,sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for ( int i = 1, j=n ; i <= n && j >= 1; i++, j--){
        //printf("%d\n", sum = sum + i);
        sum = sum + i;
        printf("%d\n", j);
    } 
    printf("Sum is : %d\n", sum);

    return 0;
}
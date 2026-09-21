#include <stdio.h>

int sum(int a, int b){
    return a + b;
}

//The variable which we can use in the code is n
void printTable(int n);


int main(){
    int x,y;
    printf("Enter the first num: ");
    scanf("%d", &x);;
    printf("Enter the first num: ");
    scanf("%d", &y);
    
    int s = sum(x, y);
    printf("sum is : %d\n", s);
    printTable(s);
    return 0;
}

void printTable(int n) { //Parameter/ formal parameter
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i * n);
    }
}
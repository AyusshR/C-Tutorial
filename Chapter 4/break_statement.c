#include <stdio.h>

int main(){
    for (int i=1; i<=50; i++){
        if(i == 3){
            break; //program checks when i reaches 3 then break it till this point and prints end
        }
        printf("%d\n", i);
    }
    printf("end");

    return 0;
}// it also exit a nested loop
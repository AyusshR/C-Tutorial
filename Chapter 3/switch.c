#include <stdio.h>

int main() {
    int day; // mon-1 tues-2 wed-3 
    // U can do the same thing with characters a b C just use char instead of int 
    printf("Enter Day (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
    //they can be in any order
    case 1 : printf("Monday \n");
        break;
    case 2 : printf("Tuesday \n");
        break;
    case 3 : printf("Wednesday \n");
        break;
    case 4 : printf("Thrusday \n");
        break;
    case 5 : printf("Friday \n");
        break;
    case 6 : printf("Saturday \n");
        break;
    case 7 : printf("Sunday \n");
        break;
    default: printf("Not a valid day\n");
        break;
    }
    return 0;
}
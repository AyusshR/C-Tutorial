/* Implement a C program to calculate the total cost of an item.
The program should:
• Accept the price of one item.
• Accept the quantity purchased.
• Calculate and display the total bill.
Formula:
Total Bill = Price × Quantity*/
#include <stdio.h>

int main() {
    float price;
    int quantity;
    float totalBill;

    printf("Enter the price of one item: ");
    scanf("%f", &price);
    
    printf("Enter the quantity purchased: ");
    scanf("%d", &quantity);

    totalBill = price * quantity;

    printf("\nTotal Bill: %.2f\n", totalBill);

    return 0;
}
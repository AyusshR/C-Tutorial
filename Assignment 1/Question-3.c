/* Implement a C program to calculate the total cost of an item.
The program should:
• Accept the price of one item.
• Accept the quantity purchased.
• Calculate and display the total bill.
Formula:
Total Bill = Price × Quantity*/
#include <stdio.h>

int main() {
    // Declare variables for price, quantity, and total bill
    float price;
    int quantity;
    float totalBill;

    // Accept user input for price and quantity
    printf("Enter the price of one item: ");
    scanf("%f", &price);
    
    printf("Enter the quantity purchased: ");
    scanf("%d", &quantity);

    // Calculate the total bill
    totalBill = price * quantity;

    // Display the total bill
    printf("\nTotal Bill: %.2f\n", totalBill);

    return 0;
}
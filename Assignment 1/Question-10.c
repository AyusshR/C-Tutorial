/*A company wants to generate a simple invoice for a customer.
Implement a C program to accept:
• Product ID
• Product Price
• Quantity
• Discount Percentage
Calculate the following:
Subtotal = Price × Quantity
Discount Amount = Subtotal × Discount Percentage / 100
Final Amount = Subtotal − Discount Amount
Display the following details in a properly formatted manner:
Product ID
Subtotal
Discount Amount
Final Payable Amount*/
#include <stdio.h>

int main(void) {
    /* Declare variables for Product_ID, Product_Price, Quantity, Discount Percentage 
    and Taking values from the user */
    int Product_ID;
    printf("Please Enter the Product ID: ");
    scanf("%d", &Product_ID);
    int Product_Price;
    printf("Please Enter the Product Price: ");
    scanf("%d", &Product_Price);
    int Quantity;
    printf("Please Enter the Quantity: ");
    scanf("%d", &Quantity);
    int Discount_Percentage;
    printf("Please Enter the Discount Percentage: ");
    scanf("%d", &Discount_Percentage);
    
    int Subtotal = Product_Price*Quantity;
    int Discount_Amount = (Subtotal * Discount_Percentage) / 100;

    printf("Your Product ID is : %d\n", Product_ID);
    printf("Your Subtotal is : %d\n", Subtotal);
    printf("Your Discount Amount is : %d\n", Discount_Amount);
    printf("Your Final Payment Amount is : %d\n", Subtotal - Discount_Amount );
    
    return 0;
}
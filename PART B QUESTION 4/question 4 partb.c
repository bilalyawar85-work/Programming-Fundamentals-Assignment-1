#include <stdio.h>

int main() {
    int quantity;
    float price;
    float discount;
    float tax;
    float subtotal;
    float discountedamount;
    float bill;

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter discount %%: ");
    scanf("%f", &discount);

    printf("Enter tax %%: ");
    scanf("%f", &tax);

    if (quantity <= 0) {
        printf("Invalid Quantity\n");
    }
    else if (price <= 0) {
        printf("Invalid Price\n");
    }
    else if (discount < 0 || discount > 100) {
        printf("Invalid Discount %%\n");
    }
    else if (tax < 0 || tax > 100) {
        printf("Invalid Tax %%\n");
    }
    else {
        subtotal = quantity * price;
        discountedamount = subtotal - (subtotal * discount) / 100;
        bill = discountedamount + (discountedamount * tax) / 100;

        printf("Subtotal = %.2f\n", subtotal);
        printf("Discounted Amount = %.2f\n", discountedamount);
        printf("Bill = %.2f\n", bill);
    }

    return 0;
}

#include <stdio.h>

int main() {
    
    float burger_price = 100;
    float pizza_price = 200;
    float pasta_price = 100;
    float soda_price = 50;
    float noodles_price=150;

    int burger_qty, pizza_qty, pasta_qty, soda_qty, noodles_qty;
    float subtotal, tax_amount, total_bill;
    float tax_rate = 0.08; // 8% tax rate

    printf("Welcome to Our Restaurant!\n");
    printf("--- Menu ---\n");
    printf("1. Burger: %.2f\n", burger_price);
    printf("2. Pizza: %.2f\n", pizza_price);
    printf("3. Pasta: %.2f\n", pasta_price);
    printf("4. Soda: %.2f\n", soda_price);
    printf("5.Noodles:%.2f\n", noodles_price);
    printf("------------\n\n");

    
    printf("Enter quantity for Burger: ");
    scanf("%d", &burger_qty);

    printf("Enter quantity for Pizza: ");
    scanf("%d", &pizza_qty);

    printf("Enter quantity for Pasta: ");
    scanf("%d", &pasta_qty);

    printf("Enter quantity for Soda: ");
    scanf("%d", &soda_qty);
    
    printf("Enter quantity for noodles: ");
    scanf("%d",&noodles_qty);

    
    subtotal = (burger_qty * burger_price) +
               (pizza_qty * pizza_price) +
               (pasta_qty * pasta_price) +
               (soda_qty * soda_price)+
               (noodles_qty*noodles_price);

    
    tax_amount = subtotal * tax_rate;

    total_bill = subtotal + tax_amount;
    printf("\n-------------- Your Bill ------------------------------------------------\n-------------------------------------------------------------------=----------\n");
    if (burger_qty > 0) printf("Burger x %d: %.2f\n", burger_qty, burger_qty * burger_price);
    if (pizza_qty > 0) printf("Pizza x %d: %.2f\n", pizza_qty, pizza_qty * pizza_price);
    if (pasta_qty > 0) printf("Pasta x %d: %.2f\n", pasta_qty, pasta_qty * pasta_price);
    if (soda_qty > 0) printf("Soda x %d: %.2f\n", soda_qty, soda_qty * soda_price);
    if(noodles_qty>0) printf("Noodlesx %d: %.2f\n",noodles_qty,noodles_qty*noodles_price);
    printf("Subtotal: %.2f\n", subtotal);
    printf("Tax (%.0f%%): %.2f\n", tax_rate * 100, tax_amount);
    printf("Total Bill: %.2f\n", total_bill);
    printf("Thank you for your order!\n");

    return 0;
}

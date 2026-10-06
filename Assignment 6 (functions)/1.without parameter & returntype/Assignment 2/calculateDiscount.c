//Q 5.calculateDiscount

#include <stdio.h>
void main()
{
    calculateDiscount();
}
void calculateDiscount()
{
    float price, discount, finalPrice;
    char student;

    printf("Enter purchase price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    if (student == 'y' || student == 'Y')
    {
        if (price > 500)
            discount = price * 20 / 100;
        else
            discount = price * 10 / 100;
    }
    else
    {
        if (price > 600)
            discount = price * 15 / 100;
        else
            discount = 0;
    }

    finalPrice = price - discount;

    printf("Discount = %.2f\n", discount);
    printf("Final Price = %.2f", finalPrice);
}


#include <stdio.h>
void main()
{
    float price, discount, finalPrice;
    char student;

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    discount = calculateDiscount(price, student);

    finalPrice = price - discount;

    printf("Discount = %.2f\n", discount);
    printf("Final Price = %.2f", finalPrice);
}
float calculateDiscount(float price, char student)
{
    float discount;

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

    return discount;
}


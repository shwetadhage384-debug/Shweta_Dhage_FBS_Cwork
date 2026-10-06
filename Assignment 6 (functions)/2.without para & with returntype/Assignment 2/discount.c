#include <stdio.h>
void main()
{
    float discount;

    discount = calculateDiscount();

    printf("Discount = %f", discount);
}
float calculateDiscount()
{
    float price, discount;
    char student;

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    if(student == 'y' || student == 'Y')
    {
        if(price > 500)
            discount = price * 20 / 100;
        else
            discount = price * 10 / 100;
    }
    else
    {
        if(price > 600)
            discount = price * 15 / 100;
        else
            discount = 0;
    }
    return discount;
}


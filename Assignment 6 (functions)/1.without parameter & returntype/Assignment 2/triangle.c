//Q 2.Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.

#include <stdio.h>
void main()
{
    checkTriangle();
}
void checkTriangle()
{
    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
        printf("Triangle is Equilateral");
    else if (a == b || b == c || a == c)
        printf("Triangle is Isosceles");
    else
        printf("Triangle is Scalene");
}


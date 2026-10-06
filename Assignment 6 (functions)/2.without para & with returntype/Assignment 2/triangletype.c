#include <stdio.h>
void main()
{
    int result;

    result = triangleType();

    if(result == 1)
        printf("Triangle is Equilateral");
    else if(result == 2)
        printf("Triangle is Isosceles");
    else
        printf("Triangle is Scalene");
}
int triangleType()
{
    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a == b && b == c)
        return 1;
    else if(a == b || b == c || a == c)
        return 2;
    else
        return 3;
}


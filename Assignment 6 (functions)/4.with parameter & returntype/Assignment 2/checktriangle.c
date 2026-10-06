#include <stdio.h>
void main()
{
    int a, b, c, result;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    result = checkTriangle(a, b, c);

    if (result == 1)
        printf("Equilateral Triangle");
    else if (result == 2)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");

}
int checkTriangle(int a, int b, int c)
{
    if (a == b && b == c)
        return 1;       // Equilateral
    else if (a == b || b == c || a == c)
        return 2;       // Isosceles
    else
        return 3;       // Scalene
}


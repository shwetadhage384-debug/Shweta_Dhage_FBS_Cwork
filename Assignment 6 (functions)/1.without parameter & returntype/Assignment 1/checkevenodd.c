//Q 1.Write a program to check whether a number is even or odd.

#include <stdio.h>
void main()
{
    checkEvenOdd();
}
void checkEvenOdd()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d is Even", n);
    else
        printf("%d is Odd", n);
}


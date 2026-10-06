//Q 2.Write a program to check given 3 digit number is pallindrome or not.

#include <stdio.h>
void main()
{
    checkPalindrome();
}
void checkPalindrome()
{
    int n, original, reverse = 0, rem;

    printf("Enter a 3-digit number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    if (original == reverse)
        printf("%d is a Palindrome number", original);
    else
        printf("%d is not a Palindrome number", original);
}


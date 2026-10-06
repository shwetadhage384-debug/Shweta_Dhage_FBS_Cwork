#include <stdio.h>
void main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = checkPalindrome(n);

    if (result == 1)
        printf("%d is Palindrome Number", n);
    else
        printf("%d is Not Palindrome Number", n);
}
int checkPalindrome(int n)
{
    int original, reverse = 0, digit;

    original = n;

    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse)
        return 1;
    else
        return 0;
}


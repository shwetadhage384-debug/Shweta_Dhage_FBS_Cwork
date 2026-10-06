#include <stdio.h>
void main()
{
    int n, result;

    printf("Enter a 3 digit number: ");
    scanf("%d", &n);

    result = checkPalindrome(n);

    if (result == 1)
        printf("%d is Palindrome", n);
    else
        printf("%d is Not Palindrome", n);
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


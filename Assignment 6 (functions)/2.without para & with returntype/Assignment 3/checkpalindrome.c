#include <stdio.h>
void main()
{
    int result;

    result = checkPalindrome();

    if(result == 1)
        printf("Number is Palindrome");
    else
        printf("Number is Not Palindrome");
}
int checkPalindrome()
{
    int n, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if(reverse == original)
        return 1;
    else
        return 0;
}


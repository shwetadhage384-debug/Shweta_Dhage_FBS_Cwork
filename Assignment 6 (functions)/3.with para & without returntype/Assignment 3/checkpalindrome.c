#include <stdio.h>
void main()
{
    int n = 121;
    checkPalindrome(n);
}
void checkPalindrome(int n)
{
    int temp, digit, reverse = 0;

    temp = n;

    while(n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    if(reverse == temp)
        printf("%d is a Palindrome Number", temp);
    else
        printf("%d is Not a Palindrome Number", temp);
}


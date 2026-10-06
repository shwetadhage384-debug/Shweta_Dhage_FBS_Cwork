#include <stdio.h>
void main()
{
    int n;
    printf("Enter 3 digit number: ");
    scanf("%d", &n);

    checkPalindrome(n);
}
void checkPalindrome(int n)
{
    int original, reverse = 0, digit;

    original = n;

    digit = n % 10;
    reverse = reverse * 10 + digit;
    n = n / 10;
    
    if(original == reverse)
        printf("Number is Palindrome");
    else
        printf("Number is Not Palindrome");
}


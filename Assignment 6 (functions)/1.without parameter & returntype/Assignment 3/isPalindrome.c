#include <stdio.h>
void main() 
{
	isPalindrome();
}
void isPalindrome()
{
    int n, original, reverse = 0, digit;
    printf("Enter a number:");
	scanf("%d", &n);
	
    original = n;

    while(n > 0) 
	{
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    if(reverse == original)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
//Q 9.Check the given number is Palindrome number or not. Input: n = 121

#include <stdio.h>
void main() 
{
    int n=121, original, reverse = 0, digit;
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
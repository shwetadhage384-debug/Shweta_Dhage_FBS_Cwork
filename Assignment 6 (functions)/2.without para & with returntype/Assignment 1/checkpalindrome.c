#include <stdio.h>
void main()
{
    int result;

    result = palindrome();

    if(result == 1)
        printf("Number is Palindrome");
    else
        printf("Number is Not Palindrome");
}
int palindrome()
{
    int n, original, reverse, rem;

    printf("Enter a 3 digit number: ");
    scanf("%d", &n);

    original = n;
    reverse = 0;

    while(n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    if(original == reverse)
        return 1;
    else
        return 0;
}


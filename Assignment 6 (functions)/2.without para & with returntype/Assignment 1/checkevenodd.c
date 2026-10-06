#include <stdio.h>
void main()
{
    int result;
    result = checkEvenOdd();

    if(result == 1)
        printf("Number is Even");
    else
        printf("Number is Odd");
}
int checkEvenOdd()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        return 1;
    else
        return 0;
}


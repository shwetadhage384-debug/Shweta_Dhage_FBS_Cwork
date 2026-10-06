#include <stdio.h>
void main()
{
    int result;

    result = checkPerfect();

    if(result == 1)
        printf("Number is Perfect");
    else
        printf("Number is Not Perfect");
}
int checkPerfect()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }
    if(sum == n)
        return 1;
    else
        return 0;
}


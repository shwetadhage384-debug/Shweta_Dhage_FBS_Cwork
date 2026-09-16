//Q 2.Print a right-angled triangle pattern. Input: n = 5

#include <stdio.h>
void main()
{
    int n = 5,i, j;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
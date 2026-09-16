//Q 7.Print a Floyd’s triangle pattern Input: n = 4

#include <stdio.h>
void main()
{
    int n = 4, i, j, num = 1;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}
//Q 9.Print a hollow square pattern Input: n = 4

#include <stdio.h>
void main()
{
    int n=4, i, j;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(i == 1 || i == n || j == 1 || j == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
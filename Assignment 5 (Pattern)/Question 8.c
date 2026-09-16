//Q 8.Print a pattern of stars in diamond shape Input: n = 4

#include <stdio.h>

int main()
{
    int n=4, i, j;

    // Increasing stars
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Decreasing stars
    for(i = n - 1; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
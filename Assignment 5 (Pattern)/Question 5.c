//Q 5.Print an inverted pyramid pattern Input: n = 5
 
#include <stdio.h>
void main()
{
    int n = 5, i, j;

    for(i = n; i >= 1; i--)
    {
        // Print spaces
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

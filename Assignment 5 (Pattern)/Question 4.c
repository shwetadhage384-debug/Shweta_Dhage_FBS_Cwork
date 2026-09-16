//Q 4.pyramid pattern.Input: n = 5

#include <stdio.h>
void main()
{
    int n = 5, i, j, spaces;
    
    for(i = 1; i <= n; i++)
    {
    	spaces = n - i;
        // Print spaces
        for(j = 1; j <= spaces; j++)
        {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    
    
}
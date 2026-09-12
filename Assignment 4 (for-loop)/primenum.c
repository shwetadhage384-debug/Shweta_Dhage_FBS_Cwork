//Q 2.Print prime numbers in the given range 1 to n.

#include <stdio.h>
void main() 
{
    int n = 50, i, j, flag;

    printf("Prime numbers are: ");

    for(i = 2; i <= n; i++) 
	{
        flag = 0;
        j = 2;

        while(j < i) 
		{
            if(i % j == 0) 
			{
                flag = 1;
                break;
            }
            j++;
        }
        if(flag == 0) 
		{
            printf("%d ", i);
        }
    }
}
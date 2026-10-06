#include <stdio.h>
void main()
{
    printNumbers();
}
int printNumbers()
{
    int i = 1;

    while(i <= 10)
	{
		printf("%d ", i);
		i++;
	}
}


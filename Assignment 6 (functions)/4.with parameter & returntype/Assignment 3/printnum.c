#include <stdio.h>
void main()
{
    int n = 10;

    printNumbers(n);
}
int printNumbers(int n)
{
    int i;

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    return 0;
}


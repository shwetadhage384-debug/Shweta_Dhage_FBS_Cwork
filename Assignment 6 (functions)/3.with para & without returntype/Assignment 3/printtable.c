#include <stdio.h>
void main()
{
    int n = 5;
    table(n);
}
void table(int n)
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}


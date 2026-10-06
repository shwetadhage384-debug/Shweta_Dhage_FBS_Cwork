#include <stdio.h>
void main()
{
    int start = 1, end = 5;

    sumRange(start, end);
}
void sumRange(int start, int end)
{
    int i, sum = 0;

    for(i = start; i <= end; i++)
    {
        sum = sum + i;
    }
    printf("Sum = %d", sum);
}


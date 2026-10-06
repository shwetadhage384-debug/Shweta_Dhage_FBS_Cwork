#include <stdio.h>
void main()
{
    int start, end, result;

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    result = sumRange(start, end);

    printf("Sum = %d", result);
}
int sumRange(int start, int end)
{
    int i, sum = 0;

    for (i = start; i <= end; i++)
    {
        sum = sum + i;
    }
    return sum;
}


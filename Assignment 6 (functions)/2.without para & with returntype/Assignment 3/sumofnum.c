#include <stdio.h>
void main()
{
    int result;

    result = findSum();

    printf("Sum = %d", result);
}
int findSum()
{
    int start, end, i, sum = 0;

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    for(i = start; i <= end; i++)
    {
        sum = sum + i;
    }
    return sum;
}


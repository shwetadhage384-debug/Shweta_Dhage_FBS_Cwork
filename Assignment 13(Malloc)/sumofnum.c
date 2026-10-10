#include <stdio.h>
void main()
{
    int *a, n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    if (n <= 0)
        return 1;

    a = malloc(n * sizeof(int));
    if (a == NULL)
        return 1;

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Sum = %d", findSum(a, n));

    free(a);
}
int findSum(int *a, int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
        sum = sum + a[i];

    return sum;
}


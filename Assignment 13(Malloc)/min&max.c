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

    findMinMax(a, n);
    free(a);
}

void findMinMax(int *a, int n)
{
    int min = a[0], max = a[0], i;

    for (i = 1; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];

        if (a[i] > max)
            max = a[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
}


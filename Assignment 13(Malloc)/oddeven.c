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

    findOddEven(a, n);
    free(a);
}

void findOddEven(int *a, int n)
{
    int i;

    printf("Even numbers: ");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            printf("%d ", a[i]);
    }

    printf("\nOdd numbers: ");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
            printf("%d ", a[i]);
    }
}


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

    sortArray(a, n);

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    free(a);
}
void sortArray(int *a, int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}


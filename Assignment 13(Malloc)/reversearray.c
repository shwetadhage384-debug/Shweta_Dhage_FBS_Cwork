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

    reverse(a, n);

    printf("Reversed array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    free(a);
}
void reverse(int *a, int n)
{
    int i, temp;

    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}


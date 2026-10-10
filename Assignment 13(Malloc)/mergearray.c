#include <stdio.h>
void main()
{
    int *a, *b, *c, n, m, i;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    printf("Enter size of second array: ");
    scanf("%d", &m);

    if (n <= 0 || m <= 0)
        return 1;

    a = malloc(n * sizeof(int));
    b = malloc(m * sizeof(int));
    c = malloc((n + m) * sizeof(int));

    if (a == NULL || b == NULL || c == NULL)
    {
        free(a);
        free(b);
        free(c);
        return 1;
    }
    printf("Enter first array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter second array: ");
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);

    merge(a, b, c, n, m);

    printf("Merged array: ");
    for (i = 0; i < n + m; i++)
        printf("%d ", c[i]);

    free(a);
    free(b);
    free(c);
}
void merge(int *a, int *b, int *c, int n, int m)
{
    int i;

    for (i = 0; i < n; i++)
        c[i] = a[i];

    for (i = 0; i < m; i++)
        c[n + i] = b[i];
}


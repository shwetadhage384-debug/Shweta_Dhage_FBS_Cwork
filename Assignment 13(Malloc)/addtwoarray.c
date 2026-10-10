#include <stdio.h>
void main()
{
    int *a, *b, *c, n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    if (n <= 0)
        return 1;

    a = malloc(n * sizeof(int));
    b = malloc(n * sizeof(int));
    c = malloc(n * sizeof(int));

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
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    addArrays(a, b, c, n);

    printf("Third array: ");
    for (i = 0; i < n; i++)
        printf("%d ", c[i]);

    free(a);
    free(b);
    free(c);

}
void addArrays(int *a, int *b, int *c, int n)
{
    int i;

    for (i = 0; i < n; i++)
        c[i] = a[i] + b[i];
}


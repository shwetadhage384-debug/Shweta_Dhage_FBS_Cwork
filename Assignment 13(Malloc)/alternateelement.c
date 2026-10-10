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

    printf("Alternate elements: ");
    alternate(a, n);
    free(a);
}

void alternate(int *a, int n)
{
    int i;

    for (i = 0; i < n; i = i + 2)
        printf("%d ", a[i]);
}


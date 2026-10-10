#include <stdio.h>
void main()
{
    int *a, n, i, key, result;

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

    printf("Enter number to search: ");
    scanf("%d", &key);

    result = search(a, n, key);

    if (result == -1)
        printf("Number not found");
    else
        printf("Number found at position %d", result + 1);

    free(a);
}

int search(int *a, int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
            return i;
    }
    return -1;
}


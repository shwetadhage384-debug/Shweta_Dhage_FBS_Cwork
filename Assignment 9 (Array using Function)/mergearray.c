#include <stdio.h>
void main()
{
    int arr[100], brr[100], crr[200];
    int n, m;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    printf("Enter first array:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter size of second array: ");
    scanf("%d", &m);

    printf("Enter second array:\n");
    for(int i = 0; i < m; i++)
        scanf("%d", &brr[i]);

    mergeArrays(arr, n, brr, m, crr);

    printf("Merged array: ");
    display(crr, n + m);
}

void mergeArrays(int arr[], int n, int brr[], int m, int crr[])
{
    int i;

    for(i = 0; i < n; i++)
    {
        crr[i] = arr[i];
    }

    for(int j = 0; j < m; j++)
    {
        crr[i] = brr[j];
        i++;
    }
}

void display(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}


#include <stdio.h>
void main()
{
    int arr[100], brr[100], crr[100], n;

    printf("Enter size of arrays: ");
    scanf("%d", &n);

    printf("Enter first array:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter second array:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &brr[i]);

    addArrays(arr, brr, crr, n);

    printf("Third array: ");
    display(crr, n);
}

void addArrays(int arr[], int brr[], int crr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        crr[i] = arr[i] + brr[i];
    }
}

void display(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}


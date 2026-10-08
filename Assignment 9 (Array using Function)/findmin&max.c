//Q 1.Find minimum and maximum number in array

#include <stdio.h>
void main()
{
    int arr[100], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Minimum = %d\n", findMin(arr, n));
    printf("Maximum = %d\n", findMax(arr, n));
}
int findMax(int arr[], int n)
{
    int max = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    return max;
}

int findMin(int arr[], int n)
{
    int min = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }

    return min;
}

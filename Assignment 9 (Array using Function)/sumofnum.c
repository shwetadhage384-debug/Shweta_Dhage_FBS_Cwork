#include <stdio.h>
void main()
{
    int arr[100], n, sum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sum = findSum(arr, n);

    printf("Sum = %d", sum);
}
int findSum(int arr[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}


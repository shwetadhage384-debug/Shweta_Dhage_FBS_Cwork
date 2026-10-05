#include <stdio.h>
void main()
{
    int arr[5] = {10, 7, 15, 13, 20};
    int i, j, count;

    printf("Prime numbers: ");

    for(i = 0; i < 5; i++)
    {
        count = 0;

        for(j = 1; j <= arr[i]; j++)
        {
            if(arr[i] % j == 0)
                count++;
        }

        if(count == 2)
            printf("%d ", arr[i]);
    }
}
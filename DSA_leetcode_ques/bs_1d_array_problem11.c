//Find the peak element from an array

#include <stdio.h>

int main()
{
    int n;
    int x;
    int arr[100];

    printf("enter n");
    scanf("%d", &n);

    printf("enter array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (i != 0 && i != (n - 1))
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                printf("peak element is %d at index %d", arr[i], i);
            }
        }
    }
    return 0;
}
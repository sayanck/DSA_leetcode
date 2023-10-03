//Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.


#include <stdio.h>

int main()
{
    int n;
    int arr[100];

    printf("enter n: ");
    scanf("%d", &n);

    printf("enter array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            printf("\n%d", arr[i]);
        }
    }

    return 0;
}

//  You are given an array of ‘N’ integers.
// You need to find the length of the longest sequence which contains the consecutive elements.

#include <stdio.h>

int main()
{
    int n;
    int arr[100];

    printf("enter n");
    scanf("%d", &n);

    printf("enter the array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // logic
    int arr_f[100];
    int j = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] + 1 == arr[i + 1])
        {
            arr_f[j] = arr[i];
            j++;
            if (arr[i + 1] + 1 != arr[i + 2])
            {
                arr_f[j] = arr[i + 1];
                j++;
            }
        }
    }
    printf("subarrry\n");
    for (int i = 0; i < j; i++)
    {
        printf("%d\n", arr_f[i]);
    }
    return 0;
}
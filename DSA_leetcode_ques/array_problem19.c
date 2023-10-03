// You are given a read-only array of N integers with values also in the range [1, N] both inclusive. Each integer appears exactly once except A which appears twice and B which is missing.
// The task is to find the repeating and missing numbers A and B where A repeats twice and B is missing.

#include <stdio.h>

void sorting(int arr[], int n)
{

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
}

void check_duplicate(int arr[], int n)
{

    // int duplicate=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("duplicate--%d\n", arr[j]);
            }
        }
    }
}

void check_missing(int arr[], int n)
{
    int check = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1] || arr[i] + 1 == arr[i + 1])
        {
            continue;
        }
        else
        {
            printf("missing--%d\n", arr[i] + 1);
            check = 1;
        }
    }
    if (check == 0)
    {
        printf("missing--%d\n", arr[n - 1] + 1);
    }
}

int main()
{

    int n;
    int arr[100];

    printf("enter n");
    scanf("%d", &n);

    printf("enter array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");

    sorting(arr, n);

    check_duplicate(arr, n);
    check_missing(arr, n);
}
//Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. Merge them in sorted order. 
//Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.

#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void sorting(int arr[], int len)
{
    int temp;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
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

int main()
{

    int n;
    int m;

    int arr1[100];
    int arr2[100];

    printf("enter n");
    scanf("%d", &n);

    printf("enter m");
    scanf("%d", &m);

    printf("enter array 1\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("enter array 2\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("\narray 1\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr1[i]);
    }

    printf("\narray 2\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d  ", arr2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] > arr2[j])
            {
                swap(&arr1[i], &arr2[j]);

                j--;
            }
        }
    }

    sorting(arr1, n);
    sorting(arr2, m);

    printf("\nFina array 1\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr1[i]);
    }

    printf("\nFinal array 2\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d  ", arr2[i]);
    }

    return 0;
}

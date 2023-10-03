//Given an array of intervals, merge all the overlapping intervals and return an array of non-overlapping intervals.


#include <stdio.h>

void delete_subarray(int arr[][100], int *n, int index)
{
    for (int i = index; i < (*n); i++)
    {
        arr[i][0] = arr[i + 1][0];
        arr[i][1] = arr[i + 1][1];
    }
    (*n)--;
}

int main()
{
    int n;
    int arr[100][100];

    printf("enter n");
    scanf("%d", &n);

    printf("enter array with subarray");
    for (int i = 0; i < n; i++)
    {
        scanf("%d  %d", &arr[i][0], &arr[i][1]);
    }
    printf("\nsubarray\n");
    for (int i = 0; i < n; i++)
    {
        printf("[%d  %d]   ", arr[i][0], arr[i][1]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i][1] >= arr[i + 1][0])
        {
            // arr[i][1] = (arr[i][1] > arr[i + 1][0]) ? arr[i+1][1] : arr[i][1];
            arr[i][1] = arr[i + 1][1];
            delete_subarray(arr, &n, i + 1);
            i--;
        }
    }

    printf("\nnew subarray\n");
    for (int i = 0; i < n; i++)
    {
        printf("[%d  %d]   ", arr[i][0], arr[i][1]);
    }
    return 0;
}
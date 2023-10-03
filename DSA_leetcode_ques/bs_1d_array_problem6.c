//Given an integer array arr of size N, sorted in ascending order (with distinct values) and a target value k. Now the array is rotated at some pivot point unknown to you.
// Find the index at which k is present and if k is not present return -1.



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

int binary_search(int arr[], int n, int x)
{

    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }

        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    printf("not found: \n");
}

int main()
{
    int n;
    int x;
    int arr[100];
    int d;

    printf("enter the no");
    scanf("%d", &x);

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

    sorting(arr, n);

    int c = binary_search(arr, n, x);

    printf("\npresent at index %d", c);

    return 0;
}
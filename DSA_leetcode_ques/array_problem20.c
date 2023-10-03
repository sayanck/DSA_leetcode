//  Given an array of N integers, count the inversion of the array (using merge-sort).
//What is an inversion of an array? Definition: for all i & j < size of array, if i < j then you have to find pair (A[i],A[j]) such that A[j] < A[i].


#include <stdio.h>

int main()
{
    int n;
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
        printf("%d   ", arr[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((i < j && arr[i] > arr[j]) || (i > j && arr[i] < arr[j]))
            {
                count++;
            }
        }
    }
    printf("\n%d  is the count", count);
    return 0;
}
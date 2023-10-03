// Given an array of integers and an integer k, return the total number of subarrays whose sum equals k.
//A subarray is a contiguous non-empty sequence of elements within an array.

#include <stdio.h>

void sub_array(int arr[], int n, int sum_final)
{

    int sum = 0;
    // int arr_final[100]=0;

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {

            sum = sum + arr[j];
            if (sum == sum_final)
            {
                printf("set::\n");
                for (int k = i; k <= j; k++)
                {
                    printf("%d ", arr[k]);
                }
                
            }
        }
    }
}

int main()
{

    int n;
    int arr[100];

    printf("enter n");
    scanf("%d", &n);

    int sum_final;

    printf("enter the sum");
    scanf("%d", &sum_final);

    printf("enter the array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("-    %d   -", arr[i]);
    }
    printf("\n");

    sub_array(arr, n, sum_final);
}
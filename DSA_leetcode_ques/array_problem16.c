// Given an array containing both positive and negative integers, we have to find the length of the longest subarray with the sum of all elements equal to zero.


#include <stdio.h>

int count_array(int arr_store[], int k)
{
    int count = 0;
    for (int i = 0; i < k; i++)
    {
        count++;
    }
    return count;
}

int longest_array(int arr[], int n)
{

    int sum = 0;
    int max = 0;
    int x;
    int arr_store[100];
    for (int i = 0; i < n; i++)
    {
       // max = 0;
       sum=0;
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                sum = sum + arr[k];
                if (sum == 0)
                {
                    int k = 0;
                    while (i <= j)
                    {
                        arr_store[k] = arr[i];
                        k++;
                        i++;
                    }
                    x = count_array(arr_store, k);
                    if (x > max)
                    {
                        max = x;
                    }
                }
            }
           // sum=0;
           // max=0;
        }
    }
    return max;
}

int main()
{

    int n;
    int c;
    int arr[100];

    printf("enter n");
    scanf("%d", &n);

    printf("enter array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array::\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    c = longest_array(arr, n);
    printf("\nmax element is %d", c);

    return 0;
}
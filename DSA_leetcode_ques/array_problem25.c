//Given an array and a sum k, we need to print the length of the longest subarray that sums to k.


#include <stdio.h>

int main()
{
    int n;
    int x;
    int arr[100];

    printf("enter x");
    scanf("%d", &x);

    printf("enter n: ");
    scanf("%d", &n);

    printf("enter array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    int max = 0;
    int len = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        // int max=0;
        int len = 0;
        for (int j = i + 1; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                sum = sum + arr[k];
                if (sum == x)
                {
                    while (i <= j)
                    {
                        len++;
                        i++;
                    }
                    if (len > max)
                    {
                        max = len;
                    }
                }
            }
        }
    }
    printf("\nlongest subarray is %d\n", max);

    return 0;
}
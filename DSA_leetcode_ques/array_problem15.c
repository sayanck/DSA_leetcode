// Given an array of N integers, your task is to find unique quads that add up to give a target value.
// In short, you need to return an array of all the unique quadruplets [arr[a], arr[b], arr[c], arr[d]] such that their sum is equal to a given target.

#include <stdio.h>

void four_sum(int arr[], int n, int target)
{

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            continue;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (j != i + 1 && arr[j] == arr[j - 1])
            {
                continue;
            }
            int k = j + 1;
            int l = n - 1;

            while (k < l)
            {
                sum = arr[i];
                sum += arr[j];
                sum += arr[k];
                sum += arr[l];

                if (sum == target)
                {
                    printf("\nset:: %d  %d  %d  %d\n", arr[i], arr[j], arr[k], arr[l]);
                    k++;
                    l--;

                    while (k < l && arr[k] == arr[k - 1])
                    {
                        k++;
                    }
                    while (k < l && arr[l] == arr[l + 1])
                    {
                        l--;
                    }
                }
                else if (sum > target)
                {
                    l--;
                }
                else
                {
                    k++;
                }
            }
        }
    }
}

int main()
{

    int n;
    int temp;
    int arr[100];
    int target;

    printf("enter sum");
    scanf("%d", &target);

    printf("enter n");
    scanf("%d", &n);

    printf("enter array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

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

    printf("\narray\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    four_sum(arr, n, target);
}
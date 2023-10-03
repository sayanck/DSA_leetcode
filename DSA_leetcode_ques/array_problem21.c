// Given an array of numbers, you need to return the count of reverse pairs. 
//Reverse Pairs are those pairs where i<j and arr[i]>2*arr[j].


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
            if ((i < j && arr[i] > 2*arr[j]))
            {
                printf("\npair-- %d , %d \n", arr[i], arr[j]);
                count++;
            }
        }
    }
    printf("\n%d  is the count of reverse paris", count);
    return 0;
}
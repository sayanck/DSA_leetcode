// There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements.
// Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.


#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int arr_pos[100];
    int arr_neg[100];

    printf("enter n");
    scanf("%d", &n);

    printf("enter the array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            arr_pos[k] = arr[i];
            k++;
        }
    }

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            arr_neg[j] = arr[i];
            j++;
        }
    }
   
    int temp;
    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (arr_pos[j] < arr_pos[i])
            {
                temp = arr_pos[j];
                arr_pos[j] = arr_pos[i];
                arr_pos[i] = temp;
            }
        }
    }

    for (int i = 0; i < j; i++)
    {
        for (int a = i + 1; a< j; j++)
        {
            if (arr_neg[a] < arr_neg[i])
            {
                temp = arr_neg[a];
                arr_neg[a] = arr_neg[i];
                arr_neg[i] = temp;
            }
        }
    }
   
    int arr_sort[100];
    k = 0;
    j = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 || i == 0)
        {
            arr_sort[i] = arr_pos[k];
            k++;
        }
        else
        {
            arr_sort[i] = arr_neg[j];
            j++;
        }
    }
    printf("sorted array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr_sort[i]);
    }
    return 0;
}
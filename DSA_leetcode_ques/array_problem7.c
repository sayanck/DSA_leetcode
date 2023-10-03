//  Given an array, print all the elements which are leaders.
// A Leader is an element that is greater than all of the elements on its right side in the array.

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

    int j = 0;
    int max = 0;
    int arr_final[100];

    for (int i = n - 1; i >= 0; i--)
    {

        if (i == (n - 1))
        {
            arr_final[j] = arr[i];
            j++;
        }
        else
        {
            for (int k = i; k < n; k++)
            {
                if (arr[k] > max)
                {
                    max = arr[k];
                }
            }

            if (max == arr[i])
            {
                arr_final[j] = arr[i];
                j++;
            }
        }
        max = 0;
    }
    printf("leader\n");
    for (int i = 0; i < j; i++)
    {
        printf("%d\n", arr_final[i]);
    }
    return 0;
}
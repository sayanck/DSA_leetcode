
// Given an array of N integers, write a program to return an element that occurs more than N/2 times in the given array.
// You may consider that such an element always exists in the array.

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

     int len = 1;

    for (int i = 0; i < n; i++)
    {
        len = 1;

        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] == arr[j])
            {
                len++;
            }
        }
        if (len >= (n / 2))
        {
            int duplicate = 0;
            for (int k = 0; k < i; k++)
            {
                if (arr[k] == arr[i])
                {
                    duplicate = 1;
                    break;
                }
            }
            if(duplicate==0){
                printf("element %d\n",arr[i]);
            }
        }
    }
    return 0;
}
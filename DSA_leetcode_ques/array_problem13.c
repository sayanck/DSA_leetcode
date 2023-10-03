// Given an array of N integers. Find the elements that appear more than N/3 times in the array.

#include <stdio.h>

int main()
{

    int n;
    int arr[100];

    printf("enter n");
    scanf("%d", &n);

    printf("enter array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
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
        if (len >= n / 3)
        {
            int duplicate=0;
            for(int k=0; k<i; k++){
                if(arr[i]==arr[k]){
                    duplicate=1;
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
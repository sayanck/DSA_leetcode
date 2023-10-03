// You are given a sorted array arr of distinct values and a target value x. You need to search for the index of the target value in the array.
//If the value is present in the array, then return its index. Otherwise, determine the index where it would be inserted in the array while maintaining the sorted order.


#include <stdio.h>

int lower_bound(int arr[], int n, int x){

    int max=0;
    for(int i=0; i<n; i++){
        
            if(arr[i+1]>=x){
                return arr[i];
            }
        
    }
}


int upper_bound(int arr[], int n, int x)
{

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            if (max > x)
            {
                return i;
            }
        }
    }
}

int main()
{
    int n;
    int x;
    int arr[100];
    int d;

    printf("enter the no");
    scanf("%d", &x);

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
        printf("%d  ", arr[i]);
    }
    int c;

    c = upper_bound(arr, n, x);
    d = lower_bound(arr, n, x);

    if ((d + 1) == c)
    {
        printf("enter at index---%d\n", d + 1);
    }
    if (arr[d + 1] == x && arr[c - 1] == x)
    {
        printf("present at index---%d\n", d + 1);
    }
    return 0;
}
//You’re given an sorted array arr of n integers and an integer x. Find the floor and ceiling of x in arr[0..n-1].
//The floor of x is the largest element in the array which is smaller than or equal to x.
//The ceiling of x is the smallest element in the array greater than or equal to x.


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
                return max;
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

    printf("\n-- %d floor --\n", d);
    printf("\n-- %d celling --\n", c);

    return 0;
}
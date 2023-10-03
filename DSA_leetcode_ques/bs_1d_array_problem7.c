//Given an integer array arr of size N, sorted in ascending order (with distinct values). Now the array is rotated between 1 to N times which is unknown. Find the minimum element in the array. 


#include<stdio.h>

int main()
{
    int n;
    int x;
    int arr[100];
    int d;
    int min=99999999;

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

    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("\nminimum is %d", min);

    return 0;
}
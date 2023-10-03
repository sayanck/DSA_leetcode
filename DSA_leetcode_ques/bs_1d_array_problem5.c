//Given a sorted array of N integers, write a program to find the index of the last occurrence of the target key. If the target is not found then return -1.


#include<stdio.h>

int first_occurance(int arr[], int n, int x){

    for(int i=0; i<n; i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int last_occurance(int arr[], int n, int x){

    for(int i=n-1; i>=0; i--){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
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
    
    int c= first_occurance(arr,n,x);
    int d= last_occurance(arr,n,x);

    printf(" \nfirst occurance: %d\n", c);
    printf(" last occurance: %d\n", d);

}
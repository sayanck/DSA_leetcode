//Given a sorted array of N integers and an integer x, write a program to find the upper bound of x.


#include<stdio.h>

void sorting(int arr[], int n)
{

    int temp;

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
}

int upper_bound(int arr[], int n, int x){

    int max=0;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
            if(max>x)
            {
                printf("\nat index %d ",i);
                return max;
            }
        }
    }
}

int main(){
    int n;
    int x;
    int arr[100];

    printf("enter the no");
    scanf("%d",&x);

    printf("enter n");
    scanf("%d",&n);

    printf("enter array");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("array\n");
    for(int i=0; i<n; i++){
        printf("%d  ",arr[i]);
    }
    int c;
    sorting(arr,n);
    c=upper_bound(arr,n,x);
    printf("\nupper bound is---%d ",c);
    return 0;
}
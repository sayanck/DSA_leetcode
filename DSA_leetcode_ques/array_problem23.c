//Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array.


#include<stdio.h>

int main(){
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

    int len=1;
    int max=0;
    for(int i=0; i<n; i++){
        if(arr[i]==arr[i+1]){
            len++;
            if(len>max){
                max=len;
            }
        }
        else{
            len=0;
        }
    }
    printf(" \nmax count --%d ", max);
}

// Given an array consisting of only 0s, 1s, and 2s. Write a program to in-place sort the array without using inbuilt sort functions

#include<stdio.h>


int main(){
    int n;
    int arr[100];
    int temp;

    printf("enter n");
    scanf("%d",&n);

    printf("enter array");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("sorted array");
    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
    }

    return 0;
}
// Given an array that contains both negative and positive integers, find the maximum product subarray.

#include<stdio.h>

int main(){
     int n;
    int arr[100];
    int mult=1;
    int max=1;

    printf("enter n");
    scanf("%d",&n);

    printf("enter array");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i;k<=j;k++){
                mult=mult*arr[k];
                if(mult>max){
                    max=mult;
                }
               
            }
            mult=1;
        }
    }
    printf("the max product is :%d",max);
    return 0;
}
//Kadane’s Algorithm : Maximum Subarray Sum in an Array

#include<stdio.h>

int main(){
     int n;
    int arr[100];
    int sum=0;
    int max=0;

    printf("enter n");
    scanf("%d",&n);

    printf("enter array");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i;k<=j;k++){
                sum=sum+arr[k];
                if(sum>max){
                    max=sum;
                }
               
            }
            sum=0;
        }
    }
    printf("the max sum is :%d",max);
    return 0;
}
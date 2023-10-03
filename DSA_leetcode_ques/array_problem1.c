
//Two Sum : Check if a pair with given sum exists in Array

#include<stdio.h>

void check_array(int arr[],int n,int sum){

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("sum exist at index %d and %d",i+1,j+1);
                return;
            }
        }
    }

}
int main(){
    int n;
    int arr[100];
    int sum;

    printf("enter n");
    scanf("%d",&n);

    printf("enter array");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("enter sum");
    scanf("%d",&sum);

    check_array(arr,n,sum);

}
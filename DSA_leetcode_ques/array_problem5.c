//You are given an array of prices where prices[i] is the price of a given stock on an ith day.

//You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit,


#include<stdio.h>

int main(){
     int n;
    int arr[100];
    int max_profit=0;
    int max=0;
    int a,b;

    printf("enter n");
    scanf("%d",&n);

    printf("enter array");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
           
           max=arr[j]-arr[i];
           if(max > max_profit){
            max_profit=max;
            a=arr[i];
            b=arr[j];
           }
        }
    }
    printf("the max profit is %d from %d to %d",max_profit,a,b);
    return 0;
}
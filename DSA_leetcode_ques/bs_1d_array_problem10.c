//Check unique element using time complexity 0(n)

#include<stdio.h>

int check_unique(int arr[], int n){

    if(n==1){
        return arr[0];
    }

    for(int i=0; i<n; i++){
        if(i==0){
            if(arr[i]!=arr[i+1]){
                return arr[i];
            }
        }
        else if(i==n-1){
            if(arr[i]!=arr[i-1]){
                return arr[i];
            }
        }
        else{
            if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1]){
                return arr[i];
            }
        }
    }
}

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

int main(){
    int n;
    int x;
    int arr[100];

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

    sorting(arr,n);

    int c= check_unique(arr,n);
    
    printf("unique is %d",c);

    return 0;
}
// Right shift array of given index


#include <stdio.h>
int main()
{
    int arr[20];
    int arr_1[100];
    int final_arr[100];
    int n;
    int x;

    printf("no of shifts");
    scanf("%d", &x);

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter an array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Reversed array: ");
    int k = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        arr_1[k] = arr[i];
        k++;
    }
    /*for(int i=0;i<k;i++){

        printf("%d",arr_1[i]);
    }*/

    int l = x;
    for (int i = n - 1; i >= x; i--)
    {
        final_arr[l] = arr_1[i];
        l++;
    }
    int m = x - 1;
    for (int i = 0; i <= x - 1; i++)
    {
        final_arr[m] = arr_1[i];
        m--;
    }
    for (int i = 0; i < l; i++)
    {
        printf("\n%d ", final_arr[i]);
    }

    return 0;
}
